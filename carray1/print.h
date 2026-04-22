#pragma once

#include <stddef.h>

#define N1 5u

typedef unsigned short data_t;

extern const char NL;

void print_row(const data_t*, size_t);
void print0(const data_t[][N1], size_t);
void print1(const data_t*, size_t, size_t);
