#include "triangle.h"
#include "utils.h"

#include <math.h>

cpc name_triangle(cpv src)
{
	cptriangle ptr = src;
	return ptr->name;
}

double area_triangle(cpv src)
{
	cptriangle ptr = src;
	const double perim2 = ptr->perimeter(src) / 2.;
	double ret = perim2;
	const size_t size = sizeof ptr->side / sizeof * ptr->side;
	for(size_t i = 0; i < size; i++)
	{
		ret *= perim2 - ptr->side[i];
	}
	return sqrt(ret);
}

double perimeter_triangle(cpv src)
{
	cptriangle ptr = src;
	const size_t size = sizeof ptr->side / sizeof * ptr->side;
	return sum(ptr->side, size);
}
