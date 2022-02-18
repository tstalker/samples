#include "token.h"

decision decision_get(cpvector_int pv)
{
	switch(pv->size(pv))
	{
	case 0:
		return END;
	case 1:
		return LEFT;
	}

	cdecision dd[] = { LEFT, RIGHT, LEFT_RIGHT, LEFT_LEFT, RIGHT_RIGHT };
	vector_decision dv = { .cinit = vector_cinit_decision };
	size_t sz = sizeof dd / sizeof *dd;

	if(pv->size(pv) == 2)
		sz -= 2;
	dv.cinit(&dv, dd, sz);
	return map(&dv, pv);
}
