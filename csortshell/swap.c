#include "generic.h"

void swap(iptr_t p0, iptr_t p1)
{
	const int t = *p0;
	*p0 = *p1;
	*p1 = t;
}
