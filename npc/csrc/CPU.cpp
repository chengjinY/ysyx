#include <cstdio>
// Verilator with trace
#include <VCPU.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
// DPI-C
#include <svdpi.h>
#include <VCPU__Dpi.h>
#include <verilated_dpi.h>


// ========================= Debug =========================
bool is_gtkwave_enabled = true;		// Makefile required it to be true for now

// =============== GtkWave ===============
#define WTRACE if (is_gtkwave_enabled) m_trace -> dump(sim_time++)
VerilatedVcdC *m_trace;		// trace
vluint64_t sim_time = 0;	// time of gtkwave

// =============== SDB ===============

// =============== Itrace ===============

// =============== Mtrace ===============

// =============== Ftrace ===============


// ========================= Environment =========================
VerilatedContext *contextp;
VCPU *cpu;

// =============== Memory ===============
#define SIZE_MEM 65536
uint8_t mem[SIZE_MEM];

// =============== DPI-C ===============

// Memory Read
extern "C" void pmem_read(long long raddr, long long *rdata)
{
	if (raddr < 0x0000000080000000) return;
	raddr = raddr - 0x0000000080000000;
	int pos = raddr;
	long long ret = 0;
	for (int i = 7; i >= 0; --i) {
		ret = (ret << 8) | mem[pos + i];
	}
	*rdata = ret;
}

// Memory Write
extern "C" void pmem_write(long long waddr, long long wdata, char mask)
{
	// not correct, not use mask, just for a simple test...
	if (waddr < 0x0000000080000000) return;
	waddr = waddr - 0x0000000080000000;
	int pos = waddr / 8;
	for (int i = 7; i >= 0; --i) {
		mem[pos + i] = wdata;
		wdata = wdata >> 8;
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
	m_trace -> close();
	exit(cpu_gpr[10]);
}

// =============== Functions ===============

// Load image from am-kernels (Makefile -> ./image.bin)
void load_image()
{
	char image_path[] = "/home/johnson/ysyx-workbench/npc/image.bin";
	FILE *fp = fopen(image_path, "rb");
	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	int ret = fread(mem, size, 1, fp);
	fclose(fp);
}

void cpu_reset()
{
	cpu -> clock = 0;
	cpu -> reset = 1;
	cpu -> eval();
	WTRACE;
	cpu -> clock = 1;
	cpu -> reset = 1;
	cpu -> eval();
	cpu -> reset = 0;
	WTRACE;
}

void exec_once()
{
	cpu -> clock ^= 1;
	cpu -> eval();
	WTRACE;
}

int main(int argc, char **argv, char **env)
{
	// Prepare environment
	contextp = new VerilatedContext;
	contextp -> commandArgs(argc, argv);
	cpu = new VCPU(contextp);
	Verilated::traceEverOn(true);
	m_trace = new VerilatedVcdC;
	cpu -> trace(m_trace, 5);
	m_trace -> open("waveform.vcd");

	// Load image.bin
	load_image();
	// Reset CPU
	cpu_reset();
	// Exec inf times
	while (1) {
		exec_once();
	}
	return 0;
}
