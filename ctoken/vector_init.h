#pragma once

#include "vector.h"

#define VECTOR_INIT(TYPE) \
void vector_init ## _ ## TYPE (pvector ## _ ## TYPE this, vector_pt ## _ ## TYPE pt, csizet sz) \
{ \
	this->cinit = vector_cinit ## _ ## TYPE; \
	this->cinit(this, pt, sz); \
	this->_pt = pt; \
}
