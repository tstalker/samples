#include "header.h"

bool find(const int x, const int* p, const size_t n)
{
	bool ret = false;
	for(size_t i = 0u; i < n && !ret; i++)
	{
		ret = i[p] == x;
	}
	return ret;
}
