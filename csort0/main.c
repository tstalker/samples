#include "header.h"

#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	const size_t SIZE = 50;
	int v[SIZE];
	init(v, SIZE);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, compare0);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, compare1);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, compare0);
	print(v, SIZE);
	return EXIT_SUCCESS;
}
