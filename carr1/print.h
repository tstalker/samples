#ifdef PRINT_H
#error Redefined header print.h
#endif

#define PRINT_H

#include <stddef.h>

#define NL '\n'
#define N1 4u

typedef int type;

void print0(const type[][N1], const size_t);
void print1(const type[], const size_t, const size_t);
