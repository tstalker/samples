#include "generic.h"

#include <stdlib.h>

int main(void)
{
	int data[90] = {0};
	const size_t size = sizeof data / sizeof * data;
	init(data, size);
	print(data, size);
	sortshell(data, size, less);
	print(data, size);
	sortshell(data, size, greater);
	print(data, size);
	return EXIT_SUCCESS;
}
