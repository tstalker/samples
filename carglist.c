#include <stdio.h>
#include <stdarg.h>

void print(int n, ...)
{
	va_list v;
	va_start(v, n);

	for(int i = 0; i < n; i++)
	{
		const int x = va_arg(v, int);
		printf("%d ", x);
	}

	va_end(v);
	putchar('\n');
}

int main(void)
{
	print(5, 1, 2, 3, 4, 5);
	return 0;
}
