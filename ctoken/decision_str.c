#include "token.h"

cpchar decision_str(cdecision d)
{
	cpchar ret = NULL;

	switch(d)
	{
	case END:
		ret = "END";
		break;
	case LEFT:
		ret = "LEFT";
		break;
	case RIGHT:
		ret = "RIGHT";
		break;
	case LEFT_LEFT:
		ret = "LEFT_LEFT";
		break;
	case LEFT_RIGHT:
		ret = "LEFT_RIGHT";
		break;
	case RIGHT_RIGHT:
		ret = "RIGHT_RIGHT";
		break;
	default:
		error_print(ERROR_DECISION);
	}

	return ret;
}
