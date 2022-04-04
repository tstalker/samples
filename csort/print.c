#include "header.h"

#include <stdio.h>

void print(const vector* v)
{
	for(size_t i = 0u; i < v->size; i++)
	{
		printf("%02d ", v->data[i]);
	}
	putchar('\n');
}
