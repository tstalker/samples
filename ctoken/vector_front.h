#pragma once

#include "vector.h"

#define VECTOR_FRONT(TYPE) \
vector_t ## _ ## TYPE vector_front ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	vector_ct ## _ ## TYPE ret = *this->cbegin(this); \
	return ret; \
}
