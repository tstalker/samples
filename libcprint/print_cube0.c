#include "print.h"

#include <stdio.h>

void print_cube0(cint v[][DIM1][DIM2], cszt n)
{
	for(size_t i = 0; i < n; i++)
	{
		for(size_t j = 0; j < DIM1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar(TAB);
			print_row(v[i][j], DIM2);
		}
	}
}
