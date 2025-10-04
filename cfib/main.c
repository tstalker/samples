#include "fib.h"

#include <stdlib.h>

int main(void)
{
	init();

	const deffn v[] =
	{
		{"bine ", bine},
		{"cycle", cycle},
		{"recur", recur}
	};

	const size_t n = sizeof v / sizeof *v;
	const size_t MAX = 30ul;

	for(size_t i = 0; i < n; i++)
	{
		print(v + i, MAX);
	}

	return EXIT_SUCCESS;
}

double phi = 0;
double sqrt5 = 0;
