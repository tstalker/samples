#include "print.h"

void print_table0(cint v[][DIM1], cszt n)
{
	for(size_t i = 0; i < n; i++)
		print_row(v[i], DIM1);
}
