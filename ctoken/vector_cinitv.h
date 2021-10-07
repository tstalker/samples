#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_CINITV(TYPE) \
void vector_cinitv ## _ ## TYPE (pvector ## _ ## TYPE this, cpvector ## _ ## TYPE pv) \
{ \
	this->cinit = vector_cinit ## _ ## TYPE; \
	this->cinit(this, pv->cbegin(pv), pv->size(pv)); \
}
