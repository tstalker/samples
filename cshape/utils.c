#include "utils.h"

#include <math.h>
#include <stdio.h>

#define STRING_WIDTH "9"

const double adjust = 1e2;

static void print_param(cpc, cpc, double);

void print(cpshape src)
{
	cpc name = src->name(src);
	const double area = src->area(src);
	const double perimeter = src->perimeter(src);
	print_param(name, "perimeter", perimeter);
	print_param(name, "area", area);
}

void print_param(cpc shape_name, cpc param_name, double param_value)
{
	const double adjust_value = round(adjust * param_value) / adjust;
	printf("%-" STRING_WIDTH "s %-" STRING_WIDTH "s: %g\n", shape_name, param_name, adjust_value);
}

double product(cpd src, size_t size)
{
	double ret = 1.;
	for(size_t i = 0; i < size; i++)
	{
		ret *= src[i];
	}
	return ret;
}

double sum(cpd src, size_t size)
{
	double ret = 0.;
	for(size_t i = 0; i < size; i++)
	{
		ret += src[i];
	}
	return ret;
}
