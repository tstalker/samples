#include <stdio.h>

typedef const int cint;
typedef const size_t cszt;

#define MAX1 10u

cint Data[][MAX1] =
{
	{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 },
	{ 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 },
	{ 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 },
	{ 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 }
};

cszt MAX0 = sizeof Data / sizeof Data[0];

void Print0(void)
{
	puts("Print0(): ");
	for(size_t i = 0; i < MAX0; i++)
	{
		for(size_t j = 0; j < MAX1; j++)
			printf("%02d ", Data[i][j]);
		putchar('\n');
	}
}

void Print1(cint v[MAX0][MAX1])
{
	puts("Print1(const int[][MAX1]): ");
	for(size_t i = 0; i < MAX0; i++)
	{
		for(size_t j = 0; j < MAX1; j++)
			printf("%02d ", v[i][j]);
		putchar('\n');
	}
}

void Print2(cint v[][MAX1], cszt max0)
{
	puts("Print2(const int[][MAX1], const size_t): ");
	for(size_t i = 0; i < max0; i++)
	{
		for(size_t j = 0; j < MAX1; j++)
			printf("%02d ", v[i][j]);
		putchar('\n');
	}
}

void Print3(cint v[], cszt max0, cszt max1)
{
	puts("Print3(const int[], const size_t, const size_t): ");
	for(size_t i = 0; i < max0; i++)
	{
		for(size_t j = 0; j < max1; j++)
			printf("%02d ", v[i * max1 + j]);
		putchar('\n');
	}
}

int main(void)
{
	Print0();
	putchar('\n');
	Print1(Data);
	putchar('\n');
	Print2(Data, MAX0);
	putchar('\n');
	Print3(*Data, MAX0, MAX1);
	return 0;
}
