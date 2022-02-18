#include "a2.h"
#include "utils.h"

#include <stdlib.h>
#include <string.h>

int main(void)
{
	A* p = malloc(sizeof(A));
	memcpy(p, &(A){'a', 12345}, sizeof(A));
	print(p);
	set(p, 'b', 67890, 1.23f);
	print(p);
	free(p);
}
