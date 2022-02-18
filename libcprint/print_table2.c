#include "print.h"

void print_table2(cint v[], cszt n0, cszt n1)
{
	for(size_t i = 0; i < n0; i++)
		print_row(v + n1 * i, n1);
}
