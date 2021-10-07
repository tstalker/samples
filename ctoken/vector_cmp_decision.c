#include "decision.h"
#include "vector_int.h"

VECTOR(decision)

int vector_cmp_decision(cpvoid px, cpvoid py)
{
	return vector_cmp_int(px, py);
}
