#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_GET(TYPE) \
vector_t ## _ ## TYPE vector_get ## _ ## TYPE (cpvector ## _ ## TYPE this, csizet i) \
{ \
	this->check_out_range(this, i); \
	return this->cbegin(this)[i]; \
}
