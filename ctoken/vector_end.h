#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_END(TYPE) \
vector_pt ## _ ## TYPE vector_end ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	return this->begin(this) + this->size(this); \
}
