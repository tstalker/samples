#include "header.h"

#include <stdlib.h>

int main(void)
{
	const size_t SIZE = 50;
	int v[SIZE];
	init(v, SIZE);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, cmpfwd);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, cmprev);
	print(v, SIZE);
	qsort(v, SIZE, sizeof *v, cmpfwd);
	print(v, SIZE);
	return EXIT_SUCCESS;
}
