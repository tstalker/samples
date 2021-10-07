#ifdef PRINT_H
#error Redefined header print.h
#endif

#define PRINT_H
#define NL '\n'

#include <stddef.h>

typedef int type;

void print(const type[], const size_t);
