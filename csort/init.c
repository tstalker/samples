#include "header.h"

#include <time.h>
#include <stdlib.h>

void init(int* p, const size_t n)
{
	const size_t RANK = 100;
	srand(time(NULL));

	for(size_t i = 0u; i < n; i++)
	{
		int x;
		do
		{
			x = rand() % RANK;
		}
		while(find(x, p, i));
		i[p] = x;
	}
}
