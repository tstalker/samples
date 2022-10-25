#include "fib.h"

#include <stdio.h>

void print(cpdeffn f, culong n)
{
	printf("%s:", f->name);

	for(ulong i = 0; i < n; i++)
	{
		culong x = f->pf(i);
		printf(" %lu", x);
	}
	putchar('\n');
}
