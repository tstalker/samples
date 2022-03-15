#include <stdio.h>

typedef struct
{
	int i;
	int z[];
}
abc;


int main()
{
	static abc x = { 0, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } };
	const size_t sz = 10;

	printf("%u\n", sizeof(abc));
	for(size_t i = 0; i < sz; i++)
		printf("%d ", x.z[i]);
	printf("\n");
}
