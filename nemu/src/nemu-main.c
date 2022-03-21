#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

// Here, I will test function expr()
char* rl_gets();
int cmd_p(char *args);
void test_expr() {
	int cnt = 0;
	for (char *str; (str = rl_gets()) != NULL; ) {
		char *result = strtok(str, " ");
		char *expression = result + strlen(result) + 1;
		unsigned a, b;
		int ret = sscanf(result, "%u", &a);
		if (ret != 1) assert(0);
		b = cmd_p(expression);
		// printf("%s", expression);
		if (a == b) {
			printf("OK. Loop %d.\n", ++cnt);
		} else {
			printf("Error. Loop %d, while a = %u, b = %u.\n", ++cnt, a, b);
			break;
		}
	}
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

	test_expr();
  /* Start engine. */
  // engine_start();

  return is_exit_status_bad();
}
