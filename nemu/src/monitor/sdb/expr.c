#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256,
  TK_EQ,
  TK_NUM
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // +
  {"==", TK_EQ},        // ==
  {"-", '-'},           // -
  {"\\*", '*'},         // *
  {"/", '/'},           // /
  {"\\(", '('},         // (
  {"\\)", ')'},         // )
  {"[0-9]+", TK_NUM}    // 10-based number
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* ignore whitespaces */
        if (rules[i].token_type == TK_NOTYPE)
          break;
        /* save token type */
        tokens[nr_token].type = rules[i].token_type;
        switch (rules[i].token_type) {
          case TK_NUM:
            /* for TK_NUM, store its value */
            assert(substr_len <= 32); // buffer size check
						memset(tokens[nr_token].str, 0, sizeof(tokens[nr_token].str));
            memcpy(tokens[nr_token].str, substr_start, substr_len);
            break;
          default: break;
        }
        ++nr_token;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static bool check_parentheses(int p, int q)
{
  /* not surrounded by parenthese */
  if (tokens[p].type != '(' || tokens[q].type != ')')
    return false;
  /* parentheses not match */
  int par = 0;
  for (int i = p; i <= q; ++i) {
    if (tokens[i].type == '(') ++par;
    if (tokens[i].type == ')') --par;
    if (par < 0) assert(0);
  }
  return true;
}

static uint32_t eval(int p, int q, bool *success)
{
  if (*success == false) return 0;
  if (p > q) {
    /* Bad expression */
    *success = false;
		printf("Bad expression at eval(%d %d).\n", p, q);
		return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if (tokens[p].type != TK_NUM) {
			*success = false;
			printf("Token '%s' is not a number.\n", tokens[p].str);
			return 0;
		}
    uint32_t ret = 0;
    for (int i = 0; tokens[p].str[i] != '\0'; ++i) {
      ret = (ret << 3) + (ret << 1) + tokens[p].str[i] - '0';
    }
		// printf("%u\n", ret);
    return ret;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  }
  else {
    int op = -1;
    int par = 0;
    for (int i = p; i <= q; ++i) {
      if (tokens[i].type == '(') ++par;
      if (tokens[i].type == ')') --par;
      if (par == 0) {
        if (tokens[i].type != '+' && tokens[i].type != '-' &&
            tokens[i].type != '*' && tokens[i].type != '/') continue;
        if (op == -1) op = i;
        else if (tokens[i].type == '+' || tokens[i].type == '-') {
          if (tokens[op].type == '*' || tokens[op].type == '/') op = i;
        }
      }
    }
    /* check if we cannot find the main operator */
    if (op == -1) {
			*success = false;
			printf("Cannot find the main operator at eval(%d, %d).\n", p, q);
			return 0;
		}
    uint32_t val1 = eval(p, op - 1, success);
    uint32_t val2 = eval(op + 1, q, success);
		// printf("%u %u\n", val1, val2);

		if (*success == false) return 0;

    switch (tokens[op].type) {
      case '+':
        return val1 + val2;
      case '-':
        return val1 - val2;
      case '*':
        return val1 * val2;
      case '/':
        // The divisor cannot be zero
        if (val2 == 0) {
					success = false;
					printf("The divisior might be zero while calculating at eval(%d, %d).\n", p, q);
					return 0;
				}
        return val1 / val2;
      default:
				assert(0);
    }
  }
	*success = false;
	printf("Unknown error.\n");
	return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  uint32_t ret = eval(0, nr_token - 1, success);
	// printf("%u\n", ret);

  if (*success == false) return 0;

  return ret;
}
