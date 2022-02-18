#include "print.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const type src[][N1] =
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 },
		{ 12, 13, 14, 15 },
		{ 16, 17, 18, 19 }
	};
	const size_t N0 = sizeof src / sizeof *src;
	print0(src, N0);
	putchar(NL);
	print1(*src, N0, N1);
	return EXIT_SUCCESS;
}
