#include <stdio.h>

typedef const int cint;
typedef const size_t cszt;

#define N1 4
#define N2 5

void print0(cint[], cszt, cszt, cszt);
void print1(cint[], cszt, cszt);
void print2(cint[][N1], cszt);
void print3(cint[], cszt);
void print4(cint);

int main(void)
{
	cint v[][N1][N2] =
	{
		{
			{ 0,   1,  2,  3,  4 },
			{ 5,   6,  7,  8,  9 },
			{ 10, 11, 12, 13, 14 },
			{ 15, 16, 17, 18, 19 }
		},
		{
			{ 20, 21, 22, 23, 24 },
			{ 25, 26, 27, 28, 29 },
			{ 30, 31, 32, 33, 34 },
			{ 35, 36, 37, 38, 39 }
		},
		{
			{ 40, 41, 42, 43, 44 },
			{ 45, 46, 47, 48, 49 },
			{ 50, 51, 52, 53, 54 },
			{ 55, 56, 57, 58, 59 }
		}
	};
	cszt N0 = sizeof v / sizeof *v;
	print0(**v, N0, N1, N2);
}

void print0(cint v[], cszt n0, cszt n1, cszt n2)
{
	for(size_t i = 0; i < n0; i++)
		print1(v, i * n2 + n1, n2);
}

void print1(cint v[], cszt n0, cszt n1)
{
	for(size_t i = 0; i < n0; i++)
		print3(v + i * n1, n1);
}

void print2(cint v[][N1], cszt n)
{
	for(size_t i = 0; i < n; i++)
		print3(v[i], N1);
}

void print3(cint v[], cszt n)
{
	for(size_t i = 0; i < n; i++)
		print4(v[i]);
	putchar('\n');
}

void print4(cint x)
{
	printf("%2d ", x);
}
