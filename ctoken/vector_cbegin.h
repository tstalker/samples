#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_CBEGIN(TYPE) \
vector_cpt ## _ ## TYPE vector_cbegin ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	return this->_cpt; \
}
