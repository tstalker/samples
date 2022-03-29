#include "header.h"

#include <stdlib.h>

int main(void)
{
	int data[10];
	const size_t size = sizeof data / sizeof *data;
	vector* pv = &(vector){data, size};
	init(pv);
	print("Source", pv);
	shell(pv);
	print("Sorted", pv);
	return EXIT_SUCCESS;
}
