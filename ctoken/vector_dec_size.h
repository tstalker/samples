#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_DEC_SIZE(TYPE) \
void vector_dec_size ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	this->_size--; \
}
