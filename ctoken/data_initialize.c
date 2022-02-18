#include "token.h"

#include <time.h>
#include <stdlib.h>

void data_initialize(vector_pt_int pt, csizet size)
{
	srand(time(NULL));
	const int MAX = 100;
	for(size_t i = 0; i < size; i++)
		pt[i] = (rand() - rand()) % MAX;
}
