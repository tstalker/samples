#include "print.h"

#include <stdio.h>

void print_cube1(cint v[][DIM1][DIM2], cszt n)
{
	for(size_t i = 0; i < n; i++)
	{
		print_table1(v[i], DIM1);
		if(i < n - 1)
			putchar(NL);
	}
}
