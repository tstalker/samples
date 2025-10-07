#pragma once

#include <stddef.h>

typedef int* iptr_t;
typedef const int* ciptr_t;

void init(iptr_t, size_t);
void print(ciptr_t, size_t);
void shuffle(iptr_t, size_t);
void sortshell(iptr_t, size_t);
void swap(iptr_t, iptr_t);
