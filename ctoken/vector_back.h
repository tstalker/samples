#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_BACK(TYPE) \
vector_t ## _ ## TYPE vector_back ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	this->check_empty(this); \
	return *(this->cend(this) - 1); \
}
