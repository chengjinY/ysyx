#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include <memory/paddr.h>

enum {
  TK_NOTYPE = 256,
  TK_EQ,
	TK_NOTEQ,
	TK_LOGAND,
  TK_DECNUM,
	TK_HEXNUM,
	TK_REG,
	TK_NEGATIVE,
	TK_POINTER
};

static int token_rank[512];

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // +
  {"-", '-'},           // -
  {"\\*", '*'},         // *
  {"/", '/'},           // /
  {"\\(", '('},         // (
  {"\\)", ')'},         // )
	{"==", TK_EQ},				// ==
	{"!=", TK_NOTEQ},			// !=
	{"&&", TK_LOGAND},		// &&
  {"[0-9]+", TK_DECNUM}, 		// 10-based number
	{"0x[0-9]+", TK_HEXNUM},	// 16-based number
	{"$\\S+", TK_REG}			// register
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
					case TK_DECNUM:
					case TK_HEXNUM:
					case TK_REG:
            /* for TK_DECNUM and TK_HEXNUM, store its value */
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

static bool check_parentheses(int p, int q, bool *success)
{
  /* not surrounded by parenthese */
  if (tokens[p].type != '(' || tokens[q].type != ')')
    return false;
  /* parentheses not match */
  int par = 1;
  for (int i = p + 1; i < q; ++i) {
    if (tokens[i].type == '(') ++par;
    if (tokens[i].type == ')') --par;
		if (par == 0) return false;
    if (par < 0) {
			*success = false;
			printf("Unclosed parentheses before %d.\n", i);
			return false;
		}
  }
  return true;
}

static uint64_t str2int(char *s, unsigned base)
{
	int len = strlen(s + 1);
	uint64_t ret = 0;
	for (int i = 0; i < len; ++i) {
		ret = ret * base + s[i] - '0';
	}
	for (int i = 0; i < len; ++i) {
		Log("%c\n", s[i]);
	}
	// Log("%llu\n", (unsigned long long)ret);
	return ret;
}

static uint64_t eval(int p, int q, bool *success)
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
		if (tokens[p].type == TK_DECNUM) return str2int(tokens[p].str, 10u);
		else if (tokens[p].type == TK_HEXNUM) return str2int(tokens[p].str, 16u);
		else if (tokens[p].type == TK_REG) return isa_reg_str2val(tokens[p].str, success);
		else {
			*success = false;
			printf("Token '%s' is not a number or a register.\n", tokens[p].str);
			return 0;
		}
  }
  else if (check_parentheses(p, q, success) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  }
  else {
		if (*success == false) return 0;
    int op = -1;
    int par = 0;
    for (int i = p; i <= q; ++i) {
      if (tokens[i].type == '(') ++par;
      if (tokens[i].type == ')') --par;
      if (par == 0) {
				if (token_rank[tokens[i].type] == 0) continue;
				// Compare the level of operators, find the last lowest one.
				if (op == -1 || token_rank[tokens[i].type] >= token_rank[tokens[op].type]) op = i;
      }
    }
		// printf("Eval(%d, %d): main operator at %d.\n", p, q, op);
    /* check if we cannot find the main operator */
    if (op == -1) {
			*success = false;
			printf("Cannot find the main operator at eval(%d, %d).\n", p, q);
			return 0;
		}
		// For pointer and negative operation, p = op
		if (p == op) {
			uint64_t res = eval(op + 1, q, success);
			if (*success == false) return 0;
			if (tokens[op].type == TK_POINTER)
				return (uint64_t)(*guest_to_host(res));
			if (tokens[op].type == TK_NEGATIVE)
				return (uint64_t)(-res);
			*success = false;
			return 0;
		}
    uint64_t val1 = eval(p, op - 1, success);
    uint64_t val2 = eval(op + 1, q, success);
		// printf("%d %d: %u %c %u\n", p, q, val1, tokens[op].type, val2);

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
			case TK_EQ:
				return val1 == val2;
			case TK_NOTEQ:
				return val1 != val2;
			case TK_LOGAND:
				return val1 && val2;
      default:
				*success = false;
				printf("Unknown token's type at %d.\n", op);
				return 0;
    }
  }
}

static void init_token_rank()
{
	#define r token_rank
	// 1: ( )
	r['('] = r[')'] = 1;
	// 2: -(negative) *(pointer)
	r[TK_NEGATIVE] = r[TK_POINTER] = 2;
	// 3: / *
	r['/'] = r['*'] = 3;
	// 4: + -
	r['+'] = r['-'] = 4;
	// 5: == !=
	r[TK_EQ] = r[TK_NOTEQ] = 5;
	// 6: &&
	r[TK_LOGAND] = 6;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

	init_token_rank();

	for (int i = 0; i < nr_token; ++i) {
		if (i == 0 || (tokens[i - 1].type != TK_DECNUM && tokens[i - 1].type != TK_HEXNUM
					&& tokens[i - 1].type != ')' && tokens[i - 1].type != TK_REG)) {
			// Pointer
			if (tokens[i].type == '*') tokens[i].type = TK_POINTER;
			// Negative number
			if (tokens[i].type == '-') tokens[i].type = TK_NEGATIVE;
		}
	}
  uint64_t ret = eval(0, nr_token - 1, success);

  if (*success == false) return 0;

  return ret;
}
