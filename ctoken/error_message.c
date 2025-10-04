#include "token.h"

cpchar error_message(error_clist e)
{
	cpchar ret = NULL;

	switch(e)
	{
	case ERROR_DECISION:
		ret = "Invalid decision";
		break;
	case ERROR_VECTOR_EMPTY:
		ret = "Vector is empty";
		break;
	case ERROR_VECTOR_READ_ONLY:
		ret = "Vector read only";
		break;
	case ERROR_VECTOR_OUT_RANGE:
		ret = "Vector out of range";
		break;
	default:
		ret = "Unknown error";
	}

	return ret;
}
