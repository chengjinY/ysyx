#include <common.h>
#include "syscall.h"
#include <sys/time.h>

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

  int us = 0;
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
      c->GPRx = fs_write(a[1], (void *)a[2], a[3]);
      break;
    case SYS_lseek:
      printf("[Strace - do_syscall] SYS_lseek\n");
      c->GPRx = fs_lseek(a[1], a[2], a[3]);
      break;
    case SYS_close:
      printf("[Strace - do_syscall] SYS_close\n");
      c->GPRx = fs_close(a[1]);
      break;
    case SYS_gettimeofday:
      // printf("[Strace - do_syscall] SYS_gettimeofday\n");
      us = io_read(AM_TIMER_UPTIME).us;
      ((struct timeval *) a[1])->tv_usec = us % 1000000;
      ((struct timeval *) a[1])->tv_sec = us / 1000000;
      ((struct timezone *)a[2])->tz_minuteswest = -480; // China (to be edited if it has error)
      ((struct timezone *)a[2])->tz_dsttime = 0;
      c->GPRx = 0;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
