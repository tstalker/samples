#pragma once

#include <stddef.h>
#include <stdbool.h>

typedef struct
{
	int* data;
	size_t size;
}
vector;

bool find(const vector*, const int);
void init(vector*);
void print(const char*, const vector*);
void shell(vector*);
