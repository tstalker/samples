#include "print.h"

#include <stdlib.h>

int main(void)
{
	const type src[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const size_t N = sizeof src / sizeof *src;
	print(src, N);
	return EXIT_SUCCESS;
}
