#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_CEND(TYPE) \
vector_cpt ## _ ## TYPE vector_cend ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{  \
	return this->cbegin(this) + this->size(this); \
}
