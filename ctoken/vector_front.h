#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_FRONT(TYPE) \
vector_t ## _ ## TYPE vector_front ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	return *this->cbegin(this); \
}
