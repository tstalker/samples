#pragma once

#include "vector.h"

#define VECTOR_BEGIN(TYPE) \
vector_pt ## _ ## TYPE vector_begin ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	vector_pt ## _ ## TYPE ret = this->_pt; \
	return ret; \
}
