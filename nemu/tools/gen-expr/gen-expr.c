#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned long result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

static int len = 0;

/* generate a number */
static void gen_num(int l)
{
	// make sure the first digit is not zero.
  buf[len++] = '0' + rand() % 9 + 1;
  --l;
  for (int i = 0; i < l; ++i) {
    buf[len++] = '0' + rand() % 10;
  }
	buf[len++] = 'u';
	buf[len++] = 'l';
	buf[len++] = 'l';
}

/* generate whitespaces */
static void rand_whitespace()
{
  int num = rand() % 10 + 1;
  for (int i = 0; i < num; ++i)
    if (rand() % 7 == 3) buf[len++] = ' ';
}

static void gen_rand_expr(int dep) {
  if (dep == 0) len = 0;
  if (dep > 50) {
    rand_whitespace();
    gen_num(rand() % 10 + 1);
    rand_whitespace();
    return;
  }
  switch (rand() % 3) {
    case 0:
      rand_whitespace();
      gen_num(rand() % 16 + 1);
      rand_whitespace();
      break;
    case 1:
      rand_whitespace();
      buf[len++] = '(';
      rand_whitespace();
      gen_rand_expr(dep + 1);
      rand_whitespace();
      buf[len++] = ')';
      rand_whitespace();
      break;
    case 2:
      rand_whitespace();
      gen_rand_expr(dep + 1);
      rand_whitespace();
      switch (rand() % 4) {
        case 0: buf[len++] = '+'; break;
        case 1: buf[len++] = '-'; break;
        case 2: buf[len++] = '*'; break;
        case 3: buf[len++] = '/'; break;
      }
      rand_whitespace();
      gen_rand_expr(dep + 1);
      rand_whitespace();
      break;
  }
  if (dep == 0) buf[len++] = '\0';
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr(0);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    unsigned result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

		// oh, we cannot read a number from the output.
		if (ret != 1) {
			// waste a single loop, generate a new one.
			--i;
			continue;
		}
		for (int i = 0; buf[i] != '\0'; ++i) {
			if (buf[i] == 'u' || buf[i] == 'l') buf[i] = ' ';
		}
    printf("%u %s\n", result, buf);
		fflush(stdout);
  }
  return 0;
}
