#include "print.h"

#include <stdio.h>

const char TAB = '\t';

void shift(size_t n)
{
	for(size_t i = 0; i < n; i++)
	{
		putchar(TAB);
	}
}
