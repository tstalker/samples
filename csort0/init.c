#include "header.h"

#include <stdlib.h>

void init(pint p, const size_t n)
{
	for(size_t i = 0u; i < n; i++)
	{
		int x;
		do
			x = rand() % RANK;
		while(find(x, p, i));
		i[p] = x;
	}
}
