#include "fib.h"

#include <stdlib.h>

int main(void)
{
	init();
	culong MAX = 30ul;
	const deffn v[] =
	{
		{"bine ", bine},
		{"cycle", cycle},
		{"recur", recur}
	};
	const size_t n = sizeof v / sizeof *v;

	for(size_t i = 0; i < n; i++)
	{
		print(v + i, MAX);
	}
	return EXIT_SUCCESS;
}

double phi;
double sqrt5;
