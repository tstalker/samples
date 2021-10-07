#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10u

const char NL = '\n';

int Data[MAX];

bool Find(const int d)
{
	for(size_t i = 0; i < MAX; i++)
		if(Data[i] == d) return true;
	return false;
}

void Init(const size_t Limit)
{
	for(size_t i = 0; i < MAX; i++)
		Data[i] = -1;
	srand(time(NULL));
	for(size_t i = 0; i < MAX; i++)
	{
		int d;
		do
			d = rand() % Limit;
		while(Find(d) && i < Limit);
		Data[i] = d;
	}
}

void Print0(void)
{
	puts("Print0(): ");
	for(size_t i = 0; i < MAX; i++)
		printf("%d ", Data[i]);
	putchar('\n');
}

void Print1(const int v[MAX])
{
	puts("Print1(const int[]): ");
	for(size_t i = 0; i < MAX; i++)
		printf("%d ", v[i]);
	putchar('\n');
}

void Print2(const int v[], const size_t max)
{
	puts("Print2(const int[], const size_t): ");
	for(size_t i = 0; i < max; i++)
		printf("%d ", v[i]);
	putchar(NL);
}

int main(void)
{
	Init(MAX);
	Print0();
	putchar(NL);
	Print1(Data);
	putchar(NL);
	Print2(Data, MAX);
}
