#pragma once

#include "vector.h"

#include <stdlib.h>

#define VECTOR_SORT(TYPE) \
void vector_sort ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	this->check_read_only(this); \
	qsort(this->begin(this), this->size(this), sizeof(vector_t ## _ ## TYPE), this->cmp); \
}
