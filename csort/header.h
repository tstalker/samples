#pragma once

#include <stddef.h>
#include <stdbool.h>

typedef struct
{
	int* data;
	size_t size;
}
vector;

int cmpfwd(const void*, const void*);
int cmprev(const void*, const void*);
bool find(const vector*, const int);
void init(vector*);
void print(const vector*);
