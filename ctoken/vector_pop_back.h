#pragma once

#include "vector.h"

#define VECTOR_POP_BACK(TYPE) \
vector_t ## _ ## TYPE vector_pop_back ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	vector_ct ## _ ## TYPE ret = this->back(this); \
	this->dec_size(this); \
	return ret; \
}
