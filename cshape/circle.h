#pragma once

#include "types.h"

typedef struct
{
	PFC get_name;
	PFD area;
	PFD perimeter;
	cpc name;
	double radius[1];
}
circle;

typedef const circle* cpcircle;

cpc name_circle(cpv);
double area_circle(cpv);
double perimeter_circle(cpv);
