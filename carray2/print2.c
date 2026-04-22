#include "print.h"

void print2(const data_t* ptr, size_t n0, size_t n1, size_t n2)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			print_row(ptr + (n1 * i + j) * n2, n2);
		}
	}
}
