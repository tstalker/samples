#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	bool first = true;
	for(short i = CHAR_MIN; i <= CHAR_MAX; i++)
	{
		if(!isprint(i))
		{
			continue;
		}
		if(first)
		{
			first = false;
		}
		else
		{
			putchar(' ');
		}
		const char c = (char)i;
		printf("%x:%c", i, c);

	}
	putchar('\n');
	return EXIT_SUCCESS;
}
