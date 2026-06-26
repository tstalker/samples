#include "circle.h"

#include <math.h>

const double PI = 3.1415926;

cpc name_circle(cpv src)
{
	cpcircle ptr = src;
	return ptr->name;
}

double area_circle(cpv src)
{
	cpcircle ptr = src;
	return PI * pow(*ptr->radius, 2);
}

double perimeter_circle(cpv src)
{
	cpcircle ptr = src;
	return 2 * PI * *ptr->radius;
}
