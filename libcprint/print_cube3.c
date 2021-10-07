#include "print.h"

#include <stdio.h>

void print_cube3(cint v[], cszt n0, cszt n1, cszt n2)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar(TAB);
			print_row(v + (i * n1 + j) * n2, n2);
		}
	}
}
