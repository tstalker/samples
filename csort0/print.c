#include "header.h"

#include <stdio.h>

void print(cpint p, const size_t n)
{
	for(size_t i = 0u; i < n; i++)
		printf("%02d ", i[p]);
	putchar('\n');
}
