#pragma once

#include "token.h"

#define VECTOR_CHECK_OUT_RANGE(TYPE) \
void vector_check_out_range ## _ ## TYPE (cpvector ## _ ## TYPE this, csizet i) \
{ \
	if(i >= this->size(this)) \
	{ \
		error_print(ERROR_VECTOR_OUT_RANGE); \
	} \
}
