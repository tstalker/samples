#include "pair.h"
#include "decision.h"
#include "vector_check_out_range.h"

VECTOR_CHECK_OUT_RANGE(int)
VECTOR_CHECK_OUT_RANGE(decision)

PAIR(decision, int)
VECTOR(pair_decision_int)
VECTOR_CHECK_OUT_RANGE(pair_decision_int)
