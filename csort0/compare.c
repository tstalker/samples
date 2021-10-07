#include "header.h"

int compare1(cpvoid pv0, cpvoid pv1)
{
	return compare0(pv1, pv0);
}

int compare0(cpvoid pv0, cpvoid pv1)
{
	cpint pi0 = pv0, pi1 = pv1;
	return *pi0 - *pi1;
}
