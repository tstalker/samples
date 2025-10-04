#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	bool first = true;

	for(short c = CHAR_MIN; c <= CHAR_MAX; c++)
	{
		const char d = iscntrl(c) ? ' ' : c;
		const unsigned char e = c;
		printf("%c:%u", d, e);

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
