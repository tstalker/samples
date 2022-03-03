#pragma once

#include "vector.h"

#include <stdio.h>

#define VECTOR_PRINT(TYPE) \
void vector_print ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	for(vector_cpt ## _ ## TYPE pt = this->cbegin(this); pt != this->cend(this); pt++) \
	{ \
		if(pt != this->cbegin(this)) \
		{ \
			putchar(' '); \
		} \
		this->print_elem(pt); \
	} \
	putchar('\n'); \
}
