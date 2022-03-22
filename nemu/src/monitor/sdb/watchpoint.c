#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
	char expr[512];
	uint64_t result;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

WP* new_wp() {
	// Check free_ is not NULL first.
	assert(free_ != NULL);
	WP *tmp = free_;
	free_ = free_ -> next;
	tmp -> next = head;
	head = tmp;
	return tmp;
}

void free_wp(WP *wp) {
	// Head is wp.
	if (head == wp) {
		WP *tmp = head;
		head = head -> next;
		tmp -> next = free_;
		free_ = tmp;
	} else {
		WP *pt = head;
		while (pt != NULL && pt -> next != wp) {
			pt = pt -> next;
		}
		// Cannot find wp.
		if (pt == NULL) {
			printf("No watchpoints number %d.\n", wp -> NO);
			return;
		}
		WP *tmp = pt -> next;
		pt -> next = tmp -> next;
		tmp -> next = free_;
		memset(tmp -> expr, 0, sizeof(tmp -> expr));
		free_ = tmp;
	}
}

/* add watchpoint */
void watchpoints_add(char *e) {
	bool success = true;
	/* calculate expression */
	uint64_t ret = expr(e, &success);
	/* check if argument has errors */
	if (success) {
		WP *pt = new_wp();
		/* store expression */
		memcpy(pt -> expr, e, strlen(e));
		/* store result */
		pt -> result = ret;
	} else {
		printf("%s: Syntax error.\n", e);
	}
}

/* delete watchpoint */
void watchpoints_del(int id) {
	WP *pt = head;
	while (pt != NULL) {
		if (pt -> NO != id) {
			pt = pt -> next;
		} else {
			free_wp(pt);
			return;
		}
	}
	// Cannot find wp.
	printf("No watchpoints number %d.\n", id);
}

/* display watchpoints list */
void watchpoints_display() {
	WP *pt = head;
	if (pt == NULL) {
		printf("No watchpoints.\n");
	} else {
		printf("Watchpoints List\n");
		while (pt != NULL) {
			printf("No %d: %s\n", pt -> NO, pt -> expr);
			pt = pt -> next;
		}
	}
}

/* eval expressions and compare with the previous one */
bool watchpoints_check() {
	WP *pt = head;
	bool is_changed = false;
	while (pt != NULL) {
		bool success = true;
		uint64_t now = expr(pt -> expr, &success);
		assert(success);
		/* expression's result changed, output the result */
		if (now != pt -> result) {
			is_changed = true;
			printf("Watchpoint %d: %s\n\n", pt -> NO, pt -> expr);
			printf("Old value = %lx\n", pt -> result);
			printf("New value = %lx\n\n", now);
			pt -> result = now;
		}
		pt = pt -> next;
	}
	return is_changed;
}
