#include <ctype.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
	for(short c = CHAR_MIN; c <= CHAR_MAX; c++)
		printf("%c:%u ", iscntrl(c) ? ' ' : c, (unsigned char)c);
	putchar('\n');
}
