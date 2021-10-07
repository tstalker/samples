#include "token.h"

cpchar decision_str(cdecision d)
{
	switch(d)
	{
	default:
		error_print(ERROR_DECISION);
		return NULL;
	case END:
		return "END";
	case LEFT:
		return "LEFT";
	case RIGHT:
		return "RIGHT";
	case LEFT_LEFT:
		return "LEFT_LEFT";
	case LEFT_RIGHT:
		return "LEFT_RIGHT";
	case RIGHT_RIGHT:
		return "RIGHT_RIGHT";
	}
}
