#include "generic.h"

#include <stdio.h>

void printelem(const entry* pe)
{
	printf("name: %s\tnumber: %d\n", pe->name, pe->number);
}
