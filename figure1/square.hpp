#pragma once

#include "figure.hpp"

#include <cmath>

namespace geom
{
	class square;
}

class geom::square final:
	public figure
{
public:
	square(void)
	{}

	square(const vector<double> &v): figure(v)
	{}

	~square(void) final
	{}

	double area(void) const final
	{
		return pow(v.front(), 2);
	}

	double perimeter(void) const final
	{
		return 4 * v.front();
	}

	string_view getname(void) const final
	{
		return name;
	}

private:
	const string_view name{"Square"};
};
