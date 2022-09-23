#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main(void)
{
	const char* ifname = "encode.txt";
	FILE* ifs = fopen(ifname, "rt");

	if(!ifs)
	{
		fprintf(stderr, "Error: can't open file \"%s\"\n", ifname);
		return -1;
	}

	const char* ofname = "decode.txt";
	FILE* ofs = fopen(ofname, "wt");

	if(!ofs)
	{
		fprintf(stderr, "Error: can't create file \"%s\"\n", ofname);
		return -2;
	}

	bool first = true;
	unsigned n = 0;

	while(fscanf(ifs, "%x", &n) != EOF)
	{
		if(first)
		{
			first = false;
		}
		else
		{
			putchar(' ');
			fputc(' ', ofs);
		}

		for(; n; n -= min(n, TOKENSIZE))
		{
			unsigned m = 0;
			if(fscanf(ifs, "%x", &m) == EOF)
			{
				fprintf(stderr, "Error: wrong format file \"%s\"\n", ofname);
				return -3;
			}

			char w[MAXSIZE];
			getword(m, w, MAXSIZE);
			printf("%s", w);
			fputs(w, ofs);
		}
	}

	if(!first)
	{
		putchar('\n');
		fputc('\n', ofs);
	}

	fclose(ifs);
	fclose(ofs);
	return EXIT_SUCCESS;
}
