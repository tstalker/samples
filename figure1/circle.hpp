#pragma once

#include "figure.hpp"

#include <cmath>

namespace geom
{
	class circle;
}

class geom::circle final:
	public figure
{
public:
	circle(void)
	{}

	circle(const initializer_list<double> &z):
		figure(z)
	{}

	~circle(void) final
	{}

	double area(void) const final
	{
		return PI * pow(v.front(), 2);
	}

	double perimeter(void) const final
	{
		return 2 * PI * v.front();
	}

	string_view getname(void) const final
	{
		return name;
	}

private:
	const string_view name{"Circle"};
};
