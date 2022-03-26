#include "rainbow.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(rainbow x = RED; x < BLACK; x++)
	{
		puts(get(x));
	}
	return EXIT_SUCCESS;
}
