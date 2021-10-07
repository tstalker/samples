#include "token.h"

cpchar error_message(error_clist e)
{
	switch(e)
	{
	default:
		return "Unknown error";
	case ERROR_DECISION:
		return "Invalid decision";
	case ERROR_VECTOR_EMPTY:
		return "Vector is empty";
	case ERROR_VECTOR_READ_ONLY:
		return "Vector read only";
	case ERROR_VECTOR_OUT_RANGE:
		return "Vector out of range";
	}
}
