#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for (int i = 0; i < 32; ++i) {
    printf("%s = %lx\n", regs[i], gpr(i));
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
	if (strlen(s) != 2) {
		*success = false;
		return 0;
	}
	for (int i = 0; i < 32; ++i) {
		if (s[0] == regs[i][0] && s[1] == regs[i][1]) {
			return gpr(i);
		}
	}
	if (s[0] == 'p' && s[1] == 'c') {
		return cpu.pc;
	}
	*success = false;
	return 0;
}
