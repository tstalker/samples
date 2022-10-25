#include "generic.h"

void swap(entry* pe0, entry* pe1)
{
	const char* pc = pe0->name;
	pe0->name = pe1->name;
	pe1->name = pc;

	const int x = pe0->number;
	pe0->number = pe1->number;
	pe1->number = x;
}
