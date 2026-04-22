#include "print.h"

void print0(const data_t data[][N1][N2], size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < N1; j++)
		{
			shift(i);
			print_row(data[i][j], N2);
		}
	}
}
