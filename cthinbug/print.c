#include "a3.h"
#include "utils.h"

#include <stdio.h>

void print(const A* p)
{
	printf("%c %d %.2f\n", p->c, p->i, p->f);
}
