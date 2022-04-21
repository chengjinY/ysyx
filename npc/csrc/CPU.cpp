#include <cstdio>
// verilator with trace
#include <VCPU.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
// DPI-C
#include <svdpi.h>
#include <VCPU__Dpi.h>

// sim time
vluint64_t sim_time = 0;

// memory
// 0 -> 0x80000000
#define SIZE_MEM 1000 * 4
uint8_t mem[SIZE_MEM];

// generator
#define MASK(k) ((1 << k) - 1)

void gen_addi(int &pos, int rd, int rs1, int imm)
{
	mem[pos++] = (imm >> 4);
	mem[pos++] = ((imm & MASK(4)) << 4) | (rs1 >> 1);
	mem[pos++] = ((rs1 & MASK(1)) << 7) | (rd >> 1);
	mem[pos++] = ((rd & MASK(1)) << 7) | (0b0010011);
}

void gen_ebreak(int &pos)
{
	mem[pos++] = 0b00000000;
	mem[pos++] = 0b00010000;
	mem[pos++] = 0b00000000;
	mem[pos++] = 0b01110011;
}

// Memory

int pc = 0;

extern "C" void pmem_read(long long raddr, long long *rdata) {
	if (raddr < 0x0000000080000000) return;
	raddr = raddr - 0x0000000080000000;
	int pos = raddr;
	long long ret = 0;
	for (int i = 0; i < 8; ++i) {
		ret = (ret << 8) | mem[pos + i];
	}
	*rdata = ret;
}

extern "C" void pmem_write(long long waddr, long long wdata, char mask) {
	// not correct, not use mask, just for a simple test...
	if (waddr < 0x0000000080000000) return;
	waddr = waddr - 0x0000000080000000;
	int pos = waddr / 8;
	for (int i = 7; i >= 0; --i) {
		mem[pos + i] = wdata;
		wdata = wdata >> 8;
	}
}

// ebreak

VerilatedVcdC *m_trace;
void ebreak()
{
	m_trace -> close();
	exit(0);
}

int main(int argc, char **argv, char **env)
{
	VerilatedContext *contextp = new VerilatedContext;
	contextp -> commandArgs(argc, argv);
	VCPU *cpu = new VCPU(contextp);
	
	Verilated::traceEverOn(true);
	m_trace = new VerilatedVcdC;
	cpu -> trace(m_trace, 5);
	m_trace -> open("waveform.vcd");

	int genpc = 0;
	for (int i = 0; i < 10; ++i) {
		gen_addi(genpc, 20, 20, i + 1);
	}
	gen_ebreak(genpc);
	cpu -> clock = 0;
	cpu -> reset = 1;
	cpu -> eval();
	m_trace -> dump(sim_time++);
	cpu -> clock = 1;
	cpu -> eval();
	m_trace -> dump(sim_time++);
	cpu -> reset = 0;
	for (int i = 0; i < 10; ++i) {
		cpu -> clock = 0;
		cpu -> eval();
		m_trace -> dump(sim_time++);
		cpu -> clock = 1;
		cpu -> eval();
		m_trace -> dump(sim_time++);
	}
	// note: cpu has 1 clock late to write to reg.
	m_trace -> close();
	delete cpu;
	delete contextp;
	return 0;
}
