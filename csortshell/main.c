#include "header.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int data[10] = {0};
	const size_t size = sizeof data / sizeof *data;
	vector* pv = &(vector){data, size};
	init(pv);
	printf("Source: ");
	print(pv);
	shell(pv);
	printf("Sorted: ");
	print(pv);
	return EXIT_SUCCESS;
}
