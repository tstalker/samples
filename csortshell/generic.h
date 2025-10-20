#pragma once

#include <stdbool.h>
#include <stddef.h>

typedef int* iptr_t;
typedef const int* ciptr_t;
typedef bool(*cmp_fn)(ciptr_t, ciptr_t);

bool greater(ciptr_t, ciptr_t);
bool less(ciptr_t, ciptr_t);
void init(iptr_t, size_t);
void print(ciptr_t, size_t);
void shuffle(iptr_t, size_t);
void sortshell(iptr_t, size_t, cmp_fn);
void swap(iptr_t, iptr_t);
