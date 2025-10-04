#include "token.h"

static const size_t MAX = 2u;

void decision_step(cdecision d, pvector_int pv)
{
	switch(d)
	{
	case END:
		break;
	case LEFT:
		pv->pop_front(pv);
		break;
	case RIGHT:
		pv->pop_back(pv);
		break;
	case LEFT_LEFT:
		for(size_t i = 0; i < MAX; i++)
		{
			decision_step(LEFT, pv);
		}
		break;
	case LEFT_RIGHT:
		decision_step(LEFT, pv);
		decision_step(RIGHT, pv);
		break;
	case RIGHT_RIGHT:
		for(size_t i = 0; i < MAX; i++)
		{
			decision_step(RIGHT, pv);
		}
		break;
	default:
		error_print(ERROR_DECISION);
	}
}
