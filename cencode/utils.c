#include "utils.h"

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

const char* getword(const unsigned n, char* s, const size_t m)
{
	srand(n);
	memset(s, '\0', m);
	for(size_t i = 0; i < m; i++)
	{
		const char c = rand() % ('z' - 'a' + 2) + 'a';
		if(c == 'z' + 1)
		{
			break;
		}
		s[i] = c;
	}
	return s;
}

unsigned find(const char* p)
{
	char s[MAXSIZE];
	unsigned i = 0;
	while(i < UINT_MAX && strcmp(p, getword(i, s, MAXSIZE)))
	{
		i++;
	}

	if(i == UINT_MAX)
	{
		fprintf(stderr, "Error: can't find index for word \"%s\"\n", s);
		return -3;
	}
	return i;
}

size_t min(const size_t a, const size_t b)
{
	return a < b ? a : b;
}

const size_t TOKENSIZE = 4u;
