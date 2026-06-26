#pragma once

#include "types.h"

typedef struct
{
	PFC get_name;
	PFD area;
	PFD perimeter;
	cpc name;
	double side[1];
}
square;

typedef const square* cpsquare;

cpc name_square(cpv);
double area_square(cpv);
double perimeter_square(cpv);
