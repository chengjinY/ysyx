#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
	Verilated::mkdir("logs");
	VerilatedContext *context = new VerilatedContext;
	context -> debug(0);
	context -> traceEverOn(true);
	context -> commandArgs(argc, argv);
	Vtop *top = new Vtop(context);
	for (int i = 1; i <= 1000000; ++i) {
		context -> timeInc(1);
		int a = rand() & 1;
		int b = rand() & 1;
		top -> a = a;
		top -> b = b;
		top -> eval();
		// VL_PRINTF("a = %d, b = %d, f = %d\n", a, b, top -> f);
	}
	top -> final();
#if VM_COVERAGE
	Verilated::mkdir("logs");
	context -> coveragep() -> write("logs/coverage.dat");
#endif
	delete top;
	delete context;
	return 0;
}
