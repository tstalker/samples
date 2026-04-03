#include "print.h"

#include <stdio.h>

void shift(size_t n)
{
	for(size_t i = 0; i < n; i++)
	{
		putchar(TAB);
	}
}
