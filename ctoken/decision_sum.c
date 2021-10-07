#include "token.h"

int decision_sum(cdecision d, cpvector_int pv)
{
	vector_int v = { .cinitv = vector_cinitv_int };
	v.cinitv(&v, pv);

	switch(d)
	{
	default:
		error_print(ERROR_DECISION);
	case END:
		return 0;
	case LEFT:
		return pv->front(pv);
	case RIGHT:
		return pv->back(pv);
	case LEFT_RIGHT:
		return decision_sum(LEFT, pv) + decision_sum(RIGHT, pv);
	case LEFT_LEFT:
		v.pop_front(&v);
		return decision_sum(LEFT, pv) + decision_sum(LEFT, &v);
	case RIGHT_RIGHT:
		v.pop_back(&v);
		return decision_sum(RIGHT, pv) + decision_sum(RIGHT, &v);
	}
}
