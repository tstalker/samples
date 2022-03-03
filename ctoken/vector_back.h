#pragma once

#include "vector.h"

#define VECTOR_BACK(TYPE) \
vector_t ## _ ## TYPE vector_back ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	vector_ct ## _ ## TYPE ret = *(this->cend(this) - 1); \
	return ret; \
}
