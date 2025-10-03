#pragma once

#include <stddef.h>

#define NL '\n'
#define TAB '\t'
#define N1 4
#define N2 5

void print0(const int[][N1][N2], size_t);
void print1(const int[][N2], size_t, size_t);
void print2(const int*, size_t, size_t, size_t);
void print3(const int*, size_t);
void shift(size_t);
