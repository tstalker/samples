#include "header.h"

int cmpfwd(cpvoid pv0, cpvoid pv1)
{
	cpint pi0 = pv0;
	cpint pi1 = pv1;
	cint ret = *pi0 - *pi1;
	return ret;
}
