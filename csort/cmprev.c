#include "header.h"

int cmprev(cpvoid pv0, cpvoid pv1)
{
	cint ret = cmpfwd(pv1, pv0);
	return ret;
}
