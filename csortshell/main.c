#include "generic.h"

#include <stdlib.h>

int main(void)
{
	int data[100] = {0};
	const size_t size = sizeof data / sizeof * data;
	init(data, size);
	print(data, size);
	sortshell(data, size);
	print(data, size);
	return EXIT_SUCCESS;
}
