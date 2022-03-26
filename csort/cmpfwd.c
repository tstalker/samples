#include "header.h"

int cmpfwd(const void* pv0, const void* pv1)
{
	const int *pi0 = pv0, *pi1 = pv1;
	const int ret = *pi0 - *pi1;
	return ret;
}
