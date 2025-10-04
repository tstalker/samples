#pragma once

#include <stdbool.h>
#include <stddef.h>

typedef struct
{
	int* data;
	size_t size;
}
vector;

bool find(const vector*, int);
void init(vector*);
void print(const vector*);
void shell(vector*);
