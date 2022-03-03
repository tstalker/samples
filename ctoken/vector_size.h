#pragma once

#include "vector.h"

#define VECTOR_SIZE(TYPE) \
size_t vector_size ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	csizet ret = this->_size; \
	return ret; \
}
