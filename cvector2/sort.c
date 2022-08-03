#include "generic.h"

#include <string.h>

void
sort(entry* pe, const size_t size)
{
	for(size_t i = 0; i < size; i++)
	{
		entry* pi = pe + i;
		for(size_t j = 0; j < size; j++)
		{
			entry* pj = pe + j;
			if(strcmp(pi->name, pj->name) < 0)
			{
				swap(pi, pj);
			}
		}
	}
}
