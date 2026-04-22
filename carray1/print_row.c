#include "print.h"

#include <stdio.h>

void print_row(const data_t* ptr, size_t n)
{
	for(size_t i = 0; i < n; i++)
	{
		printf("%3d", ptr[i]);
	}
	putchar(NL);
}

const char NL = '\n';
