#include "print.h"

#include <stdio.h>

void print_cube2(cint v[], cszt n0, cszt n1, cszt n2)
{
	for(size_t i = 0; i < n0; i++)
	{
		print_table2(v + i * n1 * n2, n1, n2);
		if(i < n0 - 1)
			putchar(NL);
	}
}
