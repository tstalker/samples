#include "pair.h"
#include "decision.h"
#include "vector_check_read_only.h"

VECTOR_CHECK_READ_ONLY(int)
VECTOR_CHECK_READ_ONLY(decision)

PAIR(decision, int)
VECTOR(pair_decision_int)
VECTOR_CHECK_READ_ONLY(pair_decision_int)
