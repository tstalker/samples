#include "print.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int v[][N1] =
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15},
		{16, 17, 18, 19}
	};
	const size_t N0 = sizeof v / sizeof *v;
	print0(v, N0);
	putchar(NL);
	print1(*v, N0, N1);
	return EXIT_SUCCESS;
}
