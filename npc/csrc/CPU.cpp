// ========================= CONFIG =========================
#define CONFIG_GTKWAVE
#define CONFIG_DIFFTEST

#include <cstdio>
// Verilator with trace
#include <VCPU.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
// DPI-C
#include <svdpi.h>
#include <VCPU__Dpi.h>
#include <verilated_dpi.h>
// Difftest
#include <dlfcn.h>

typedef long long ll;


// ========================= Environment =========================
VerilatedContext *contextp;
VCPU *cpu;
// =============== GtkWave ===============
#ifdef CONFIG_GTKWAVE
VerilatedVcdC *m_trace;		// trace
vluint64_t sim_time = 0;	// time of gtkwave
#endif

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536
long long img_size = 0;
uint8_t mem[MEM_SIZE];
// Memory transfer
uint8_t* cpu2mem(ll addr) { return mem + (addr - MEM_BASE); }

// =============== DPI-C ===============

// Memory Read
extern "C" void pmem_read(ll raddr, ll *rdata)
{
  if (raddr < MEM_BASE) return;
  uint8_t *pt = cpu2mem(raddr) + 7;
  ll ret = 0;
  for (int i = 0; i < 8; ++i) {
    ret = (ret << 8) | (*pt--);
  }
  *rdata = ret;
}

// Memory Write
extern "C" void pmem_write(ll waddr, ll wdata, char mask)
{
  if (waddr < MEM_BASE) return;
  uint8_t *pt = cpu2mem(waddr);
  for (int i = 0; i < 8; ++i) {
    if (mask & 1) *pt = wdata & 0xff;
    wdata >>= 8, mask >>= 1, pt++;
  }
}

// Get Registers
uint64_t *cpu_gpr = NULL;
extern "C" void get_regs(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r) -> datap());
}

// Ebreak
void ebreak()
{
#ifdef CONFIG_GTKWAVE
  m_trace -> close();
#endif
  exit(cpu_gpr[10]);
}


// ========================= Debug =========================

// =============== SDB ===============

// =============== Itrace ===============

// =============== Mtrace ===============

// =============== Ftrace ===============

// =============== Difftest ===============
#ifdef CONFIG_DIFFTEST
// Definations of Ref
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest()
{
  char ref_so_file[] = "/home/johnson/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))(dlsym(handle, "difftest_memcpy"));
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))(dlsym(handle, "difftest_regcpy"));
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))(dlsym(handle, "difftest_exec"));
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))(dlsym(handle, "difftest_raise_intr"));
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())(dlsym(handle, "difftest_init"));
  assert(ref_difftest_init);

  ref_difftest_init();
  ref_difftest_memcpy(MEM_BASE, mem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
}

void checkregs(uint64_t *ref_regs)
{
  for (int i = 0; i <= 32; ++i) {
    if (ref_regs[i] != cpu_gpr[i]) {
      printf("Error: Difftest failed at reg %d, pc = 0x%016lx\n", i, cpu_gpr[32]);
      for (int j = 0; j <= 32; ++j) {
        printf("reg %02d: dut = 0x%016lx, ref = 0x%016lx\n", j, cpu_gpr[j], ref_regs[j]);
      }
#ifdef CONFIG_GTKWAVE
      m_trace -> close();
#endif
      exit(1);
    }
  }
}

uint64_t ref_regs[33];
void difftest_exec_once()
{
  ref_difftest_exec(1);
  // pc -> ref_regs[32]
  ref_difftest_regcpy(ref_regs, DIFFTEST_TO_DUT);
  checkregs(ref_regs);
}
#endif

// ========================= Functions =========================

// Load image from am-kernels (Makefile -> ./image.bin)
void load_image()
{
  char image_path[] = "/home/johnson/ysyx-workbench/npc/image.bin";
  FILE *fp = fopen(image_path, "rb");
  fseek(fp, 0, SEEK_END);
  img_size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, img_size, 1, fp);
  fclose(fp);
}

void cpu_reset()
{
  cpu -> clock = 0;
  cpu -> reset = 1;
  cpu -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  cpu -> clock = 1;
  cpu -> reset = 1;
  cpu -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  cpu -> reset = 0;
}

void exec_once()
{
  cpu -> clock = 0;
  cpu -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
  cpu -> clock = 1;
  cpu -> eval();
#ifdef CONFIG_GTKWAVE
  m_trace -> dump(sim_time++);
#endif
}

int main(int argc, char **argv, char **env)
{
  // Prepare environment
  contextp = new VerilatedContext;
  contextp -> commandArgs(argc, argv);
  cpu = new VCPU(contextp);
#ifdef CONFIG_GTKWAVE
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  cpu -> trace(m_trace, 5);
  m_trace -> open("waveform.vcd");
#endif

  load_image();
  cpu_reset();
#ifdef CONFIG_DIFFTEST
  init_difftest();
#endif
  while (1) {
    exec_once();
#ifdef CONFIG_DIFFTEST
    difftest_exec_once();
#endif
  }
  return 0;
}
