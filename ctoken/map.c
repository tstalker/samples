#include "pair.h"
#include "token.h"

PAIR(decision, int)
VECTOR(pair_decision_int)

decision map(cpvector_decision pd, cpvector_int pv)
{
	pair_decision_int ss[pd->size(pd)];
	vector_pair_decision_int sv = {.init = vector_init_pair_decision_int};
	sv.init(&sv, ss, sizeof ss / sizeof *ss);

	for(size_t i = 0; i < sv.size(&sv); i++)
	{
		sv.set(&sv, i, (pair_decision_int){pd->get(pd, i), decision_sum(pd->get(pd, i), pv)});
	}
	sv.sort(&sv);
	cdecision ret = sv.back(&sv).first;
	return ret;
}
