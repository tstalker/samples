#include "token.h"

#include <stdlib.h>
#include <time.h>

static cint MAX = 100;

void data_initialize(vector_pt_int pt, csizet size)
{
	srand(time(NULL));

	for(size_t i = 0; i < size; i++)
	{
		pt[i] = (rand() - rand()) % MAX;
	}
}
