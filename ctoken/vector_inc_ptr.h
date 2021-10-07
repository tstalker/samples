#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_INC_PTR(TYPE) \
void vector_inc_ptr ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	this->dec_size(this); \
	if(this->begin(this)) \
		this->_pt++; \
	this->_cpt++; \
}
