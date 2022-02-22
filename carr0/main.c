#include "print.h"

#include <stdlib.h>

int main(void)
{
	const int v[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const size_t N = sizeof v / sizeof *v;
	print(v, N);
	return EXIT_SUCCESS;
}
