#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  unsigned int cnt;
  /* no argument, n = 1 by default */
  if (arg == NULL)
    cpu_exec(1);
  /* n = N (unsigned int) */
  else if (sscanf(arg, "%u", &cnt) == 1)
    cpu_exec(cnt);
  /* arg not be a unsigned integer */
  else
    printf("Unrecognized argument '%s', 'si' need an unsigned integer\n", arg);
  return 0;
}

static int cmd_info(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  /* no argument */
  if (arg == NULL || strlen(arg) != 1)
    printf("Unrecognized argument '%s', 'info' need 'r' or 'w'.\n", arg);
  /* registers */
  else if (strcmp(arg, "r") == 0) {
    isa_reg_display();
  }
  /* TODO: watchpoints */
  else if (strcmp(arg, "w") == 0)
    assert(0);
  return 0;
}

static int cmd_x(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  unsigned int cnt;
  /* first argument unrecognized */
  if (arg == NULL || sscanf(arg, "%u", &cnt) != 1)
    printf("Unrecognized argument '%s', 'x' need an integer firstly.\n", arg);
  arg = strtok(NULL, " ");
  unsigned int addr;
  /* second argument unrecognized */
  if (arg == NULL || sscanf(arg, "%x", &addr) != 1)
    printf("Unrecognized argument '%s', 'x' need an expression secondly.\n", arg);
  /* address guest to host */
  uint8_t *pos = guest_to_host(addr);
  for (int i = 0; i <= cnt; ++i) {
    printf("%p: %02x %02x %02x %02x\n", pos, *pos, *(pos + 1), *(pos + 2), *(pos + 3));
    pos += 4;
  }
  return 0;
}

static int cmd_p(char *args) {
  bool success = true;
  /* calculate expression */
  uint32_t ret = expr(args, &success);
  /* check if arg has errors */
  if (success)
    printf("%s = %u\n", args, ret);
  else
    printf("%s: Syntax Error.\n", args);
  return 0;
}

static int cmd_w(char *args) {
  return 0;
}

static int cmd_d(char *args) {
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "si <N> -- Single-step of execute N instructions. N is 1 by default.", cmd_si},
  { "info", "info r / info w -- Print the infomation of registers(r) or watchpoints(w)", cmd_info},
  { "x", "x <N> <EXPR> -- Scan the N consecutive 4-bytes starting from EXPR", cmd_x},
  { "p", "p <EXPR> -- Calculate the result of EXPR", cmd_p},
  { "w", "w <EXPR> -- Set a watchpoint at EXPR", cmd_w},
  { "d", "d <N> -- Delate the watchpoint N", cmd_d}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
