#include "print.h"

#include <stdlib.h>

int main(void)
{
	const data_t data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	const size_t N = sizeof data / sizeof *data;
	print(data, N);
	return EXIT_SUCCESS;
}
