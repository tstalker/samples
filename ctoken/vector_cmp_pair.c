#include "pair.h"
#include "vector.h"
#include "decision.h"

PAIR(decision, int)
VECTOR(pair_decision_int)

int vector_cmp_pair_decision_int(cpvoid pvx, cpvoid pvy)
{
	cppair_decision_int ppx = (cppair_decision_int)pvx, ppy = (cppair_decision_int)pvy;
	return ppx->second - ppy->second;
}
