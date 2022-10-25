#include "header.h"

#include <time.h>
#include <stdlib.h>

void init(vector* v)
{
	csizet RANK = 100;
	srand(time(NULL));

	for(size_t i = 0u; i < v->size; i++)
	{
		int x;
		do
		{
			x = rand() % RANK;
		}
		while(find(&(vector){v->data, i}, x));
		v->data[i] = x;
	}
}
