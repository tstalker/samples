#include "print.h"

#include <stdio.h>

void print0(const type v[][N1], const size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < N1; j++)
			printf("%3d", v[i][j]);
		putchar(NL);
	}
}

void print1(const type v[], const size_t n0, const size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
			printf("%3d", v[n1 * i + j]);
		putchar(NL);
	}
}
