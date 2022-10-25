#include "header.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int data[50];
	csizet size = sizeof data / sizeof *data;
	vector* pv = &(vector){data, size};
	init(pv);
	printf("Source: ");
	print(pv);
	qsort(data, size, sizeof *data, cmpfwd);
	printf("Sorted: ");
	print(pv);
	printf("Revers: ");
	qsort(data, size, sizeof *data, cmprev);
	print(pv);
	printf("Sorted: ");
	qsort(data, size, sizeof *data, cmpfwd);
	print(pv);
	return EXIT_SUCCESS;
}
