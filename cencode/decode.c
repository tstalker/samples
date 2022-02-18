#include "utils.h"

#include <stdio.h>
#include <stdbool.h>

int main(void)
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
	unsigned n;
	while(fscanf(ifs, "%x", &n) != EOF)
	{
		if(first)
			first = false;
		else
		{
			putchar(' ');
			fputc(' ', ofs);
		}

		for(; n; n -= min(n, MAXSIZE))
		{
			unsigned m;
			if(fscanf(ifs, "%x", &m) == EOF)
			{
				fprintf(stderr, "Error: wrong format file \"%s\"\n", ofname);
				return -3;
			}
			char w[100];
			getword(m, w, sizeof w / sizeof *w);
			printf(w);
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
}
