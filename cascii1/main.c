#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	bool first = true;

	for(unsigned short c = 0; c <= UCHAR_MAX; c++)
	{
		const char d = iscntrl(c) ? ' ' : c;
		printf("%c:%u", d, c);

		if(first)
		{
			first = false;
		}
		else
		{
			putchar(' ');
		}
	}

	putchar('\n');
	return EXIT_SUCCESS;
}
