#include "print.h"

void print1(const data_t data[][N2], size_t n0, size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			print_row(data[n1 * i + j], N2);
		}
	}
}
