#pragma once

#include <stddef.h>

typedef unsigned long ulong;
typedef ulong(*PF)(ulong);

typedef struct
{
	const char* name;
	PF pf;
}
deffn;

typedef const deffn* cpdeffn;

extern double phi;
extern double sqrt5;

void init(void);
void print(cpdeffn, size_t);
ulong bine(ulong);
ulong cycle(ulong);
ulong recur(ulong);
