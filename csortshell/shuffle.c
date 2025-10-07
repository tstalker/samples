#include "generic.h"

#include <stdlib.h>

// Fisher-Yates shuffle algorithm

void shuffle(iptr_t ptr, size_t size)
{
	for(int i = (int)(size - 1); i; i--)
	{
		const int j = rand() % (i + 1); // j E [0, i]
		swap(ptr + i, ptr + j);
	}
}
