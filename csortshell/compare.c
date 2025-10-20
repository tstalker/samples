#include "generic.h"

bool less(ciptr_t p0, ciptr_t p1)
{
	return *p0 < *p1;
}

bool greater(ciptr_t p0, ciptr_t p1)
{
	return *p0 > *p1;
}
