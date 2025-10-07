#include "generic.h"

#include <stdio.h>

void print(ciptr_t ptr, size_t size)
{
	for(size_t i = 0; i < size; i++)
	{
		printf("%d ", ptr[i]);
	}

	printf("\n\n");
}
