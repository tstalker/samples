#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_EMPTY(TYPE) \
bool vector_empty ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	return !this->size(this); \
}
