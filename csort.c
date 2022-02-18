#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef const void* cpv;
typedef const int* cpi;

int cmp(cpv, cpv);
void print(cpi, const size_t);

int main(void)
{
	const size_t SIZE = 10;
	int z[SIZE];
	srand(time(NULL));
	for(size_t i = 0; i < SIZE; i++)
		z[i] = rand() % 100;
	print(z, SIZE);
	qsort(z, SIZE, sizeof *z, cmp);
	print(z, SIZE);
	return EXIT_SUCCESS;
}

int cmp(cpv pv0, cpv pv1)
{
	cpi pi0 = pv0, pi1 = pv1;
	return *pi0 - *pi1;
}

void print(cpi z, const size_t sz)
{
	for(size_t i = 0; i < sz; i++)
		printf("%02d ", z[i]);
	printf("\n");
}
