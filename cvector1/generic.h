#pragma once

#include <stddef.h>

typedef struct sentry entry;
typedef void(*pf)(const entry*);

struct sentry
{
	const char* name;
	const int number;
	pf print;
};

void print(const entry*, size_t);
void printelem(const entry*);
