#include "header.h"

#include <stdlib.h>

int main(void)
{
	const size_t size = 50;
	int v[size];
	init(v, size);
	print(v, size);
	qsort(v, size, sizeof *v, cmpfwd);
	print(v, size);
	qsort(v, size, sizeof *v, cmprev);
	print(v, size);
	qsort(v, size, sizeof *v, cmpfwd);
	print(v, size);
	return EXIT_SUCCESS;
}
