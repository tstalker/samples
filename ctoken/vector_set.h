#pragma once

#include "vector.h"

#define VECTOR_SET(TYPE) \
void vector_set ## _ ## TYPE (pvector ## _ ## TYPE this, csizet i, vector_ct ## _ ## TYPE t) \
{ \
	this->check_out_range(this, i); \
	this->begin(this)[i] = t; \
}
