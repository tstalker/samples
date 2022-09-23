#include "print.h"

#include <stdio.h>

void
print0(
	const int v[][N1][N2],
	const size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < N1; j++)
		{
			shift(i);
			print3(v[i][j], N2);
		}
	}
}

void
print1(
	const int v[][N2],
	const size_t n0,
	const size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			print3(v[i * n1 + j], N2);
		}
	}
}

void
print2(
	const int v[],
	const size_t n0,
	const size_t n1,
	const size_t n2)
{
	for(size_t i = 0; i < n0; i++)
	{
		for(size_t j = 0; j < n1; j++)
		{
			shift(i);
			print3(v + (i * n1 + j) * n2, n2);
		}
	}
}

void
print3(
	const int v[],
	const size_t n)
{
	for(size_t i = 0; i < n; i++)
	{
		printf("%3d", v[i]);
	}

	putchar(NL);
}
