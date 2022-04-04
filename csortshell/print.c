#include "header.h"

#include <stdio.h>

void print(const vector* v)
{
	for(size_t i = 0; i < v->size; i++)
	{
		printf("%d ", v->data[i]);
	}
	putchar('\n');
}
