#include "token.h"

vector_t_int max3(vector_ct_int x, vector_ct_int y, vector_ct_int z)
{
	return max2(max2(x, y), max2(y, z));
}

vector_t_int max2(vector_ct_int x, vector_ct_int y)
{
	return x > y ? x : y;
}
