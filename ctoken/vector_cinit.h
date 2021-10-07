#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_CINIT(TYPE) \
void vector_cinit ## _ ## TYPE (pvector ## _ ## TYPE this, vector_cpt ## _ ## TYPE pt, csizet sz) \
{ \
	this->_pt = NULL; \
	this->_cpt = pt; \
	this->_size = sz; \
	this->initialize = vector_initialize ## _ ## TYPE; \
	this->initialize(this); \
}
