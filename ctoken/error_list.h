#pragma once

typedef enum
{
	ERROR_UNKNOWN,
	ERROR_DECISION,
	ERROR_VECTOR_EMPTY,
	ERROR_VECTOR_READ_ONLY,
	ERROR_VECTOR_OUT_RANGE
}
error_list;

typedef const error_list error_clist;
