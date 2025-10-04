#pragma once

#include <stddef.h>

typedef struct
{
	const char* name;
	const int number;
}
entry;

void print(const entry*, size_t);
void printelem(const entry*);
