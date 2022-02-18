#include "token.h"

#include <stdio.h>
#include <stdlib.h>

void error_print(error_clist e)
{
	fprintf(stderr, "Error: %s\n", error_message(e));
	exit(EXIT_FAILURE);
}
