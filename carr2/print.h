#ifdef PRINT_H
#error Redefined header print.h
#endif

#define PRINT_H

#include <stddef.h>

#define NL '\n'
#define TAB '\t'
#define DIM1 4
#define DIM2 5

typedef int type;

void print0(const type[][DIM1][DIM2], const size_t);
void print1(const type[][DIM2], const size_t, const size_t);
void print2(const type[], const size_t, const size_t, const size_t);
void shift(const size_t);
