#include <unistd.h>
#include <stdio.h>
#include <NDL.h>

int main() {
  int id = 0;
  long preus = NDL_GetTicks();
  while (1) {
    long us = NDL_GetTicks();
    if (us - preus >= 500000) {
      printf("0.5 secs passed... id = %d\n", id++);
      preus = us;
    }
  }
  return 0;
}
