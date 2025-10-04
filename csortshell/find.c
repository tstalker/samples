#include "header.h"

bool find(const vector* v, int x)
{
	bool ret = false;

	for(size_t i = 0; i < v->size && !ret; i++)
	{
		ret = v->data[i] == x;
	}

	return ret;
}
