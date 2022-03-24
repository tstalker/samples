#pragma once

typedef unsigned long ulong;
typedef const ulong culong;
typedef ulong(*PF)(culong);

typedef struct
{
	const char* name;
	PF pf;
}
deffn;
typedef const deffn cdeffn;
typedef cdeffn* cpdeffn;

extern double phi, sqrt5;

void init(void), print(cpdeffn, culong);
ulong bine(culong), cycle(culong), recur(culong);
