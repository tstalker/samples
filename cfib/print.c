#include "fib.h"

#include <stdio.h>

void print(cpdeffn f, size_t n)
{
	printf("%s:", f->name);

	for(ulong i = 0; i < n; i++)
	{
		ulong x = f->pf(i);
		printf(" %lu", x);
	}

	putchar('\n');
}
