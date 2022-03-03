#pragma once

#include "vector.h"

#define VECTOR_EMPTY(TYPE) \
bool vector_empty ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	cbool ret = !this->size(this); \
	return ret; \
}
