#include "token.h"

int decision_sum(cdecision d, cpvector_int pv)
{
	vector_int v = { .cinitv = vector_cinitv_int };
	v.cinitv(&v, pv);
	int ret = 0;

	switch(d)
	{
	case END:
		break;
	case LEFT:
		ret = pv->front(pv);
		break;
	case RIGHT:
		ret = pv->back(pv);
		break;
	case LEFT_RIGHT:
		ret = decision_sum(LEFT, pv) + decision_sum(RIGHT, pv);
		break;
	case LEFT_LEFT:
		v.pop_front(&v);
		ret = decision_sum(LEFT, pv) + decision_sum(LEFT, &v);
		break;
	case RIGHT_RIGHT:
		v.pop_back(&v);
		ret = decision_sum(RIGHT, pv) + decision_sum(RIGHT, &v);
		break;
	default:
		error_print(ERROR_DECISION);
	}
	return ret;
}
