#pragma once

#include <stddef.h>
#include <stdbool.h>

int cmpfwd(const void*, const void*);
int cmprev(const void*, const void*);
void init(int*, const size_t);
void print(const int*, const size_t);
bool find(const int, const int*, const size_t);
