#pragma once

#include "vector.h"

#define VECTOR_POP_FRONT(TYPE) \
vector_t ## _ ## TYPE vector_pop_front ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	vector_ct ## _ ## TYPE ret = this->front(this); \
	this->inc_ptr(this); \
	return ret; \
}
