#include "token.h"

#include <stdio.h>

void ptoken_print(cpint pt)
{
	token_print(*pt);
}

void token_print(cint t)
{
	printf("%d", t);
}

void stoken_print(cpchar s, cint t)
{
	printf("%s: %d\n", s, t);
}
