#pragma once

#include "types.h"

typedef struct
{
	PFC get_name;
	PFD area;
	PFD perimeter;
	cpc name;
	double side[2];
}
rectangle;

typedef const rectangle* cprectangle;

cpc name_rectangle(cpv);
double area_rectangle(cpv);
double perimeter_rectangle(cpv);
