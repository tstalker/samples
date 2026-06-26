#include "rectangle.h"
#include "utils.h"

cpc name_rectangle(cpv src)
{
	cprectangle ptr = src;
	return ptr->name;
}

double area_rectangle(cpv src)
{
	cprectangle ptr = src;
	const size_t size = sizeof ptr->side / sizeof * ptr->side;
	return product(ptr->side, size);
}

double perimeter_rectangle(cpv src)
{
	cprectangle ptr = src;
	const size_t size = sizeof ptr->side / sizeof * ptr->side;
	return 2 * sum(ptr->side, size);
}
