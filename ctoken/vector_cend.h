#pragma once

#include "vector.h"

#define VECTOR_CEND(TYPE) \
vector_cpt ## _ ## TYPE vector_cend ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	vector_cpt ## _ ## TYPE ret = this->cbegin(this) + this->size(this); \
	return ret; \
}
