#include "header.h"

#include <time.h>
#include <stdlib.h>

void init(vector* v)
{
	srand(time(NULL));

	for(size_t i = 0; i < v->size; i++)
	{
		int x;
		do
		{
			x = rand() % v->size;
		}
		while(find(&(vector){v->data, i}, x));
		v->data[i] = x;
	}
}
