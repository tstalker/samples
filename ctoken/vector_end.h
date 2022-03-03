#pragma once

#include "vector.h"

#define VECTOR_END(TYPE) \
vector_pt ## _ ## TYPE vector_end ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	vector_pt ## _ ## TYPE ret = this->begin(this) + this->size(this); \
	return ret; \
}
