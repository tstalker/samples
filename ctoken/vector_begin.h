#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_BEGIN(TYPE) \
vector_pt ## _ ## TYPE vector_begin ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	return this->_pt; \
}
