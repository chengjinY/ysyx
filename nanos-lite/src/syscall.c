#include <common.h>
#include "syscall.h"

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

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
    case SYS_brk:
      // printf("[Strace - do_syscall] SYS_brk\n");
      c->GPRx = 0;
      break;
    case SYS_open:
      printf("[Strace - do_syscall] SYS_open\n");
      c->GPRx = fs_open((const char *)a[1], a[2], a[3]);
      break;
    case SYS_read:
      printf("[Strace - do_syscall] SYS_read\n");
      c->GPRx = fs_read(a[1], (void *)a[2], a[3]);
      break;
    case SYS_write:
      printf("[Strace - do_syscall] SYS_write\n");
      if (a[1] == 1 || a[1] == 2) {
        for (int i = 0; i < a[3]; ++i) {
          putch(*(char*)(a[2] + i));
        }
        c->GPRx = a[3];
      } else if (a[1] != 0) {
        c->GPRx = fs_write(a[1], (void *)a[2], a[3]);
      } else c->GPRx = -1;
      break;
    case SYS_lseek:
      printf("[Strace - do_syscall] SYS_lseek\n");
      c->GPRx = fs_lseek(a[1], a[2], a[3]);
      break;
    case SYS_close:
      printf("[Strace - do_syscall] SYS_close\n");
      c->GPRx = fs_close(a[1]);
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
