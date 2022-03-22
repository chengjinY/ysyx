#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

// expr.c
word_t expr(char *e, bool *success);

// watchpoints.c
void watchpoints_add(char *e);
void watchpoints_del(int id);
void watchpoints_display();

#endif
