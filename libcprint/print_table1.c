#include "print.h"

void print_table1(cint v[][DIM2], cszt n)
{
	for(size_t i = 0; i < n; i++)
		print_row(v[i], DIM2);
}
