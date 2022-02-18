#include <stdio.h>

int main(void)
{
	const int v[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const size_t MAX = sizeof v / sizeof *v;
	for(size_t i = 0; i < MAX; i++)
		printf("%d ", v[i]);
	putchar('\n');
}
