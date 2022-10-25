#include "utils.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	const char* ifname = "in.txt";
	FILE* ifs = fopen(ifname, "rt");

	if(!ifs)
	{
		fprintf(stderr, "Error: can't open file \"%s\"\n", ifname);
		return -1;
	}

	const char* ofname = "encode.txt";
	FILE* ofs = fopen(ofname, "wt");

	if(!ofs)
	{
		fprintf(stderr, "Error: can't create file \"%s\"\n", ofname);
		return -2;
	}

	char w[MAXSIZE];
	memset(w, '\0', MAXSIZE);
	bool first = true;
	const unsigned SECONDS = 60;

	while(fscanf(ifs, "%s", w) != EOF)
	{
		const char* p = w;
		size_t l = strlen(p);

		if(l > TOKENSIZE)
		{
			printf("%s [%zx]: ", p, l);
		}

		if(first)
		{
			first = false;
		}
		else
		{
			fputc(' ', ofs);
		}

		if(l)
		{
			fprintf(ofs, "%zx ", l);
		}

		bool first = true;

		while(l)
		{
			time_t start;
			time(&start);

			if(first)
			{
				first = false;
			}
			else
			{
				putchar(' ');
				fputc(' ', ofs);
			}

			const size_t n = min(l, TOKENSIZE);
			char s[MAXSIZE];
			memset(s, '\0', MAXSIZE);
			memcpy(s, p, n);
			s[n] = '\0';
			const unsigned i = find(s);
			printf("%s [%zx]: %x [", s, n, i);
			fprintf(ofs, "%x", i);
			p += n;
			l = strlen(p);

			time_t finish;
			time(&finish);
			unsigned duration = difftime(finish, start);
			const unsigned seconds = duration % SECONDS ;
			duration /= SECONDS ;
			const unsigned minutes = duration % SECONDS ;
			duration /= SECONDS ;
			const unsigned hours = duration;

			if(hours)
			{
				printf("%u hours ", hours);
			}
			if(minutes)
			{
				printf("%u min ", minutes);
			}
			printf("%u sec]", seconds);
		}
		putchar('\n');
	}
	fclose(ifs);
	fclose(ofs);
	return EXIT_SUCCESS;
}
