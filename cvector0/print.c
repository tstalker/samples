#include "generic.h"

void
print(const entry* pe, const size_t size)
{
	for(size_t i = 0; i < size; i++)
	{
		printelem(pe + i);
	}
}
