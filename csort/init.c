#include "header.h"

#include <time.h>
#include <stdlib.h>

void init(vector* v)
{
	const size_t RANK = 100;
	srand(time(NULL));

	for(size_t i = 0u; i < v->size; i++)
	{
		int x = 0;

		do
		{
			x = rand() % RANK;
		}
		while(find(&(vector){v->data, i}, x));

		v->data[i] = x;
	}
}
