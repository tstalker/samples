#include "print.h"

#include <stdio.h>

void print0(const type v[][DIM1][DIM2], const size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < DIM1; j++)
		{
			shift(i);
			for(size_t k = 0; k < DIM2; k++)
				printf("%3d", v[i][j][k]);
			putchar(NL);
		}
	}
}

void print1(const type v[][DIM2], const size_t n0, const size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			for(size_t k = 0; k < DIM2; k++)
				printf("%3d", v[i * n1 + j][k]);
			putchar(NL);
		}
	}
}

void print2(const type v[], const size_t n0, const size_t n1, const size_t n2)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			for(size_t k = 0; k < n2; k++)
				printf("%3d", v[(i * n1 + j) * n2 + k]);
			putchar(NL);
		}
	}
}
