#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
	VerilatedContext *context = new VerilatedContext;
	context -> traceEverOn(true);
	context -> commandArgs(argc, argv);
	Vtop *top = new Vtop(context);
	while (!context -> gotFinish()) {
		context -> timeInc(1);
		int a = rand() & 1;
		int b = rand() & 1;
		top -> a = a;
		top -> b = b;
		top -> eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top -> f);
		assert(top -> f == a ^ b);
	}
	delete top;
	delete context;
	return 0;
}
