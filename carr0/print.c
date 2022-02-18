#include "print.h"

#include <stdio.h>

void print(const type v[], const size_t n)
{
	for(size_t i = 0; i < n; i++)
		printf("%d ", v[i]);
	putchar(NL);
}
