#include "token.h"

#define VECTOR_CHECK_READ_ONLY(TYPE) \
void vector_check_read_only ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	if(!this->begin(this)) \
		error_print(ERROR_VECTOR_READ_ONLY); \
}
