#include "vector_int.h"

int vector_cmp_int(cpvoid pvx, cpvoid pvy)
{
	cpint pix = pvx;
	cpint piy = pvy;
	cint ret = *pix - *piy;
	return ret;
}
