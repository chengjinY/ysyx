#include <common.h>
#include "syscall.h"

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit:
      // printf("[Strace - do_syscall] SYS_exit.\n");
      halt(0);
      break;
    case SYS_yield:
      // printf("[Strace - do_syscall] SYS_yield.\n");
      yield();
      c->GPRx = 0;
      break;
    case SYS_write:
      // printf("[Strace - do_syscall] SYS_write.\n");
      if (a[1] == 1 || a[1] == 2) {
        for (int i = 0; i < a[3]; ++i) {
          putch(*(char*)(a[2] + i));
        }
        c->GPRx = a[3];
      } else c->GPRx = -1;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
