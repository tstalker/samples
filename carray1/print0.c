#include "print.h"

void print0(const data_t data[][N1], size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		print_row(data[i], N1);
	}
}
