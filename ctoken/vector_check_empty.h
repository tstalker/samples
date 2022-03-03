#pragma once

#include "token.h"

#define VECTOR_CHECK_EMPTY(TYPE) \
void vector_check_empty ## _ ## TYPE (cpvector ## _ ## TYPE this) \
{ \
	if(this->empty(this)) \
	{ \
		error_print(ERROR_VECTOR_EMPTY); \
	} \
}
