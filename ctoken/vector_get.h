#pragma once

#include "vector.h"

#define VECTOR_GET(TYPE) \
vector_t ## _ ## TYPE vector_get ## _ ## TYPE (cpvector ## _ ## TYPE this, csizet i) \
{ \
	this->check_out_range(this, i); \
	vector_ct ## _ ## TYPE ret = this->cbegin(this)[i]; \
	return ret; \
}
