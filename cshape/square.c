#include "square.h"

#include <math.h>

cpc name_square(cpv src)
{
	cpsquare ptr = src;
	return ptr->name;
}

double area_square(cpv src)
{
	cpsquare ptr = src;
	return pow(*ptr->side, 2);
}

double perimeter_square(cpv src)
{
	cpsquare ptr = src;
	return 4 * *ptr->side;
}
