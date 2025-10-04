#include "header.h"

bool find(const vector* v, int x)
{
	bool ret = false;

	for(size_t i = 0u; i < v->size && !ret; i++)
	{
		ret = v->data[i] == x;
	}

	return ret;
}
