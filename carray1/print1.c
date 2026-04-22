#include "print.h"

void print1(const data_t* ptr, size_t n0, size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		print_row(ptr + n1 * i, n1);
	}
}
