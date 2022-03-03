#pragma once

#include "vector.h"

#define VECTOR_DEC_SIZE(TYPE) \
void vector_dec_size ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	this->_size--; \
}
