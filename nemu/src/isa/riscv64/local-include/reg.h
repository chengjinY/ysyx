#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline int idx2csr(int idx) {
  switch (idx) {
    case 0x305: return 0; // mtvec
    case 0x341: return 1; // mepc
    case 0x300: return 2; // mstatus
    case 0x342: return 3; // mcause
  }
  panic("idx2csr error, reading 0x%x", idx);
}

#define csr(idx) (cpu.csr[idx2csr(idx)])
#define csrval(idx) (cpu.csr[idx])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
