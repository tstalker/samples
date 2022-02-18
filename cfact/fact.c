#include "fact.h"

unsigned long long fact(const unsigned short x)
{
	return x ? x * fact(x - 1) : 1;
}
