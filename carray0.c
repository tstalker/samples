#include <stdio.h>

const char NL = '\n';

extern const size_t MAX;
extern const int Data[];

void Print0(void);
void Print1(const int[]);
void Print2(const int[], const size_t);

int main(void)
{
	Print0();
	putchar(NL);
	Print1(Data);
	putchar(NL);
	Print2(Data, MAX);
}

void Print0(void)
{
	puts("Print0():");
	for(size_t i = 0; i < MAX; i++)
		printf("%d ", Data[i]);
	putchar(NL);
}

void Print1(const int v[])
{
	puts("Print1(const int[]):");
	for(size_t i = 0; i < MAX; i++)
		printf("%d ", v[i]);
	putchar(NL);
}

void Print2(const int v[], const size_t max)
{
	puts("Print2(const int[], const size_t):");
	for(size_t i = 0; i < max; i++)
		printf("%d ", v[i]);
	putchar(NL);
}

const int Data[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
const size_t MAX = sizeof Data / sizeof *Data;
