#include "fact.h"

#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const unsigned short MAX = 21;

	for(unsigned short i = 0; i < MAX; i++)
	{
		printf("%2u: %llu\n", i, fact(i));
	}

	return EXIT_SUCCESS;
}
