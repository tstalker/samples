#include "fact.h"

ull fact(unsigned x)
{
	return x ? x * fact(x - 1u) : 1u;
}
