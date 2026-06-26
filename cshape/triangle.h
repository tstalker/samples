#pragma once

#include "types.h"

typedef struct
{
	PFC get_name;
	PFD area;
	PFD perimeter;
	cpc name;
	double side[3];
}
triangle;

typedef const triangle* cptriangle;

cpc name_triangle(cpv);
double area_triangle(cpv);
double perimeter_triangle(cpv);
