#include "generic.h"

// Shell sort algorithm

void sortshell(iptr_t ptr, size_t size, cmp_fn cmp)
{
	for(int d = (int)(size / 2); d; d /= 2)
	{
		for(iptr_t p = ptr + d; p != ptr + size; p++)
		{
			for(iptr_t q = p, r = p - d; q - ptr >= d && cmp(q, r); q = r, r = q - d)
			{
				swap(q, r);
			}
		}
	}
}
