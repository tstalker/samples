#include "header.h"

bool find(const int x, cpint p, const size_t n)
{
	for(size_t i = 0u; i < n; i++)
		if(i[p] == x)
			return true;
	return false;
}
