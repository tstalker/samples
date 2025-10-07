#include "generic.h"

#include <stdlib.h>
#include <time.h>

void init(iptr_t ptr, size_t size)
{
	for(size_t i = 0; i < size; i++)
	{
		ptr[i] = (int)i;
	}

	const time_t init_time = time(NULL);
	srand((unsigned)init_time);
	shuffle(ptr, size);
}
