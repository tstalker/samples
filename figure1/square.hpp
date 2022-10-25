#pragma once

#include "figure.hpp"

#include <cmath>

namespace gen
{
	class square;
}

class gen::square final:
	public figure
{
public:
	square(void)
	{}

	square(
		const initializer_list<double> &z):
		figure(z)
	{}

	~square(void)
	final
	{}

	double
	area(void)
	const final
	{
		return pow(v.front(), 2);
	}

	double
	perimeter(void)
	const final
	{
		return 4 * v.front();
	}

	string_view
	getname(void)
	const final
	{
		return name;
	}

private:
	const string_view name{"Square"};
};
