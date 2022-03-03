#pragma once

#include "vector.h"

#define VECTOR_CBEGIN(TYPE) \
vector_cpt ## _ ## TYPE vector_cbegin ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	vector_cpt ## _ ## TYPE ret = this->_cpt; \
	return ret; \
}
