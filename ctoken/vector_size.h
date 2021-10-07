#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_SIZE(TYPE) \
size_t vector_size ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	return this->_size; \
}
