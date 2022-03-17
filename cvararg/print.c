#include "print.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

void print(const char* fmt, ...)
{
	va_list va;
	va_start(va, fmt);
	for(bool again = true; again;)
	{
		const char c = *fmt++;
		switch(c)
		{
		case '\0':
			putchar(NL);
			again = false;
			continue;
		case 'c':
		{
			const int c = va_arg(va, int);
			printf("%c", c);
			break;
		}
		case 'i':
		{
			const int i = va_arg(va, int);
			printf("%d", i);
			break;
		}
		case 'd':
		case 'f':
		{
			const double f = va_arg(va, double);
			printf("%.2lf", f);
			break;
		}
		case 's':
		{
			const char* s = va_arg(va, const char*);
			printf("%s", s);
			break;
		}
		default:
			fprintf(stderr, "\nError format symbol \'%c\'\n", c);
		}
		putchar(' ');
	}
	va_end(va);
}
