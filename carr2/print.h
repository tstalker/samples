#pragma once

#include <stddef.h>

#define NL '\n'
#define TAB '\t'
#define N1 4
#define N2 5

void print0(const int[][N1][N2], const size_t);
void print1(const int[][N2], const size_t, const size_t);
void print2(const int[], const size_t, const size_t, const size_t);
void print3(const int[], const size_t);
void shift(const size_t);
