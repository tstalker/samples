#include "fact.h"

ull fact(const unsigned x)
{
	return x ? x * fact(x - 1u) : 1u;
}
