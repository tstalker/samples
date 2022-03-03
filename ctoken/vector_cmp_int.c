#include "vector_int.h"

int vector_cmp_int(cpvoid pvx, cpvoid pvy)
{
	cpint pix = pvx, piy = pvy;
	cint ret = *pix - *piy;
	return ret;
}
