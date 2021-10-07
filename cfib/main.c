#include "fib.h"

#include <math.h>
#include <stdlib.h>

int main(void)
{
	sqrt5 = sqrt(5);
	phi = (1 + sqrt5) / 2;

	culong MAX = 30ul;
	cdeffn v[] =
	{
		{ "bine ", bine },
		{ "cycle", cycle },
		{ "recur", recur }
	};
	const size_t n = sizeof v / sizeof *v;

	for(size_t i = 0; i < n; i++)
		print(v + i, MAX);
	return EXIT_SUCCESS;
}

double phi, sqrt5;
