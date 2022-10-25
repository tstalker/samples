#include "pair.h"
#include "token.h"

#include <stdlib.h>

PAIR(int, int)

static csizet MAX = 20u;

int main(void)
{
	vector_t_int data[MAX];
	data_initialize(data, MAX);
	vector_int v = {.cinit = vector_cinit_int};
	v.cinit(&v, data, MAX);
	pair_int_int sum = {0, 0};

	for(bool first = true; !v.empty(&v); first = !first)
	{
		v.print(&v);
		cdecision d = decision_get(&v);
		decision_print(d);
		cint x = decision_sum(d, &v);
		cpchar title = first ? "first" : "second";
		stoken_print(title, x);

		if(first)
		{
			sum.first += x;
		}
		else
		{
			sum.second += x;
		}
		stoken_print("first sum", sum.first);
		stoken_print("second sum", sum.second);
		decision_step(d, &v);
	}
	cint win_sum = max2(sum.first, sum.second);
	cpchar wtitle = win_sum == sum.first ? "first win" : "second win";
	stoken_print(wtitle, win_sum);
	return EXIT_SUCCESS;
}
