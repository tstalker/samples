#include "fib.h"

#include <stdio.h>

void print(cpdeffn f, culong n)
{
	printf("%s:", f->name);
	for(ulong i = 0; i < n; i++)
		printf(" %lu", f->pf(i));
	putchar('\n');
}
