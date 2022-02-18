#include "pair.h"
#include "token.h"

PAIR(int, int)

#define MAX 20u

int main(void)
{
	vector_t_int data[MAX];
	data_initialize(data, MAX);
	vector_int v = { .cinit = vector_cinit_int };
	v.cinit(&v, data, MAX);
	pair_int_int sum = { 0, 0 };

	for(bool first = true; !v.empty(&v); first = !first)
	{
		v.print(&v);
		cdecision d = decision_get(&v);
		decision_print(d);
		cint s = decision_sum(d, &v);
		stoken_print(first ? "first" : "second", s);
		if(first) sum.first += s;
		else sum.second += s;
		stoken_print("first sum", sum.first);
		stoken_print("second sum", sum.second);
		decision_step(d, &v);
	}

	cint win_sum = max2(sum.first, sum.second);
	stoken_print(win_sum == sum.first ? "first win" : "second win", win_sum);
}
