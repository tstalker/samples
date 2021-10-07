#include "print.h"

#include <stdio.h>

void print_row(cint v[], cszt n)
{
	for(size_t i = 0; i < n; i++)
		print_one(v[i]);
	putchar(NL);
}
