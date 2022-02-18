#include <stdio.h>

typedef const int cint;
typedef const size_t cszt;

#define MAX1 5u
#define MAX2 6u

cint Data[][MAX1][MAX2] =
{
	{
		{ 0, 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10, 11 },
		{ 12, 13, 14, 15, 16, 17 },
		{ 18, 19, 20, 21, 22, 23 },
		{ 24, 25, 26, 27, 28, 29 }
	},
	{
		{ 30, 31, 32, 33, 34, 35 },
		{ 36, 37, 38, 39, 40, 41 },
		{ 42, 43, 44, 45, 46, 47 },
		{ 48, 49, 50, 51, 52, 53 },
		{ 54, 55, 56, 57, 58, 59 }
	},
	{
		{ 60, 61, 62, 63, 64, 65 },
		{ 66, 67, 68, 69, 70, 71 },
		{ 72, 73, 74, 75, 76, 77 },
		{ 78, 79, 80, 81, 82, 83 },
		{ 84, 85, 86, 87, 88, 89 }
	}
};

cszt MAX0 = sizeof Data / sizeof Data[0];

void Print0(void)
{
	puts("Print0(): ");
	for(size_t i = 0; i < MAX0; i++)
		for(size_t j = 0; j < MAX1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar('\t');
			for(size_t k = 0; k < MAX2; k++)
				printf("%02d ", Data[i][j][k]);
			putchar('\n');
		}
}

void Print1(cint v[MAX0][MAX1][MAX2])
{
	puts("Print1(const int[][MAX1][MAX2]): ");
	for(size_t i = 0; i < MAX0; i++)
		for(size_t j = 0; j < MAX1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar('\t');
			for(size_t k = 0; k < MAX2; k++)
				printf("%02d ", v[i][j][k]);
			putchar('\n');
		}
}

void Print2(cint v[][MAX1][MAX2], cszt max0)
{
	puts("Print2(const int[][MAX1][MAX2], const size_t): ");
	for(size_t i = 0; i < max0; i++)
		for(size_t j = 0; j < MAX1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar('\t');
			for(size_t k = 0; k < MAX2; k++)
				printf("%02d ", v[i][j][k]);
			putchar('\n');
		}
}

void Print3(cint v[][MAX2], cszt max0, cszt max1)
{
	puts("Print3(const int[][MAX2], const size_t, const size_t): ");
	for(size_t i = 0; i < max0; i++)
		for(size_t j = 0; j < max1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar('\t');
			for(size_t k = 0; k < MAX2; k++)
				printf("%02d ", v[i * max1 + j][k]);
			putchar('\n');
		}
}

void Print4(cint v[], cszt max0, cszt max1, cszt max2)
{
	puts("Print4(const int[], const size_t, const size_t, const size_t): ");
	for(size_t i = 0; i < max0; i++)
		for(size_t j = 0; j < max1; j++)
		{
			for(size_t k = 0; k < i; k++)
				putchar('\t');
			for(size_t k = 0; k < max2; k++)
				printf("%02d ", v[(i * max1 + j) * max2 + k]);
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
	putchar('\n');
	Print4(**Data, MAX0, MAX1, MAX2);
	return 0;
}
