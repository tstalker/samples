#include "header.h"

#include <stdio.h>

void print(const char* s, const vector* v)
{
	printf("%s: ", s);
	for(size_t i = 0; i < v->size; i++)
	{
		printf("%d ", v->data[i]);
	}
	putchar('\n');
}
