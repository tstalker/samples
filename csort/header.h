#pragma once

#include <stdbool.h>
#include <stddef.h>

typedef int* pint;
typedef const int cint;
typedef cint* cpint;
typedef const void* cpvoid;
typedef const size_t csizet;

typedef struct
{
	pint data;
	size_t size;
}
vector;

int cmpfwd(cpvoid, cpvoid);
int cmprev(cpvoid, cpvoid);
bool find(const vector*, cint);
void init(vector*);
void print(const vector*);
