#include "pair.h"
#include "token.h"

#include <stdio.h>

PAIR(decision, int)
VECTOR(pair_decision_int)

void vector_print_elem_pair_decision_int(cppair_decision_int p)
{
	printf("{ ");
	token_print(p->first);
	printf(", ");
	token_print(p->second);
	printf(" }");
}
