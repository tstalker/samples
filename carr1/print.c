#include "print.h"

#include <stdio.h>

void print0(const int v[][N1], const size_t n0)
{
	for(size_t i = 0; i < n0; i++)
	{
		print2(v[i], N1);
	}
}

void print1(const int v[], const size_t n0, const size_t n1)
{
	for(size_t i = 0; i < n0; i++)
	{
		print2(v + n1 * i, n1);
	}
}

void print2(const int v[], const size_t n)
{
	for(size_t i = 0; i < n; i++)
	{
		printf("%3d", v[i]);
	}
	putchar(NL);
}
