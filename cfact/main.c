#include "fact.h"

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	const unsigned MAX = 21;

	for(unsigned i = 0; i < MAX; i++)
	{
		const ull x = fact(i);
		printf("%2u: %llu\n", i, x);
	}

	return EXIT_SUCCESS;
}
