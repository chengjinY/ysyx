#include <cstdio>
// verilator with trace
#include <VCPU.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

// sim time
#define MAX_SIM_TIME 10
vluint64_t sim_time = 0;

// memory
// 0 -> 0x80000000
#define SIZE_MEM 1000 * 4
uint8_t mem[SIZE_MEM];

// generator
#define MASK(k) ((1 << k) - 1)

void gen_addi(int &pos, int rd, int rs1, int imm)
{
	mem[pos] = (imm >> 2);
	mem[pos + 1] = ((imm & MASK(2)) << 6) | (rs1 >> 1);
	mem[pos + 2] = ((rs1 & MASK(1)) << 7) | (rd >> 1);
	mem[pos + 3] = ((rd & MASK(1)) << 7) | (0b0010011);
	pos += 4;
}

unsigned int gen_inst(int &pos)
{
	unsigned int ret = 0;
	for (int i = 0; i < 4; ++i, ++pos) {
		ret = (ret << 8) | mem[pos];
	}
	return ret;
}

int main(int argc, char **argv, char **env)
{
	VerilatedContext *contextp = new VerilatedContext;
	contextp -> commandArgs(argc, argv);
	VCPU *cpu = new VCPU(contextp);
	
	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	cpu -> trace(m_trace, 5);
	m_trace -> open("waveform.vcd");

	int gen_pc = 0, inst_pc = 0;
	for (int i = 0; i < 10; ++i, ++sim_time) {
		gen_addi(gen_pc, 20, 20, i);
		cpu -> inst = gen_inst(inst_pc);
		cpu -> eval();
		m_trace -> dump(sim_time);
	}
	m_trace -> close();
	delete cpu;
	delete contextp;
	return 0;
}
