#include "token.h"

vector_t_int max3(vector_ct_int x, vector_ct_int y, vector_ct_int z)
{
	vector_ct_int a = max2(x, y);
	vector_ct_int b = max2(y, z);
	vector_ct_int ret = max2(a, b);
	return ret;
}

vector_t_int max2(vector_ct_int x, vector_ct_int y)
{
	return x > y ? x : y;
}
