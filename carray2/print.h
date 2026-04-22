#pragma once

#include <stddef.h>

#define N1 4
#define N2 5

typedef unsigned short data_t;

extern const char NL;

void print_row(const data_t*, size_t);
void print0(const data_t[][N1][N2], size_t);
void print1(const data_t[][N2], size_t, size_t);
void print2(const data_t*, size_t, size_t, size_t);
void shift(size_t);
