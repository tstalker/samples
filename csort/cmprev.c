#include "header.h"

int cmprev(const void* pv0, const void* pv1)
{
	const int ret = cmpfwd(pv1, pv0);
	return ret;
}
