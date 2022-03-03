#include "print.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

void print(const char* s, ...)
{
	va_list va;
	va_start(va, s);
	for(bool again = true; again;)
	{
		const char c = *s++;
		switch(c)
		{
		case '\0':
			putchar(NL);
			again = false;
			continue;
		case 'c':
			printf("%c", va_arg(va, int));
			break;
		case 'i':
			printf("%d", va_arg(va, int));
			break;
		case 'd':
		case 'f':
			printf("%.2lf", va_arg(va, double));
			break;
		case 's':
			printf("%s", va_arg(va, const char*));
			break;
		default:
			fprintf(stderr, "\nError format symbol \'%c\'\n", c);
		}
		putchar(' ');
	}
	va_end(va);
}
