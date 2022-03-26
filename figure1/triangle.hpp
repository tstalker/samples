#pragma once

#include "figure.hpp"

namespace geom
{
	class triangle;
}

class geom::triangle final:
	public figure
{
public:
	triangle(void)
	{}

	triangle(const initializer_list<double> &z):
		figure(z)
	{}

	~triangle(void) final
	{}

	double area(void) const final;

	double perimeter(void) const final
	{
		return sum();
	}

	string_view getname(void) const final
	{
		return name;
	}

private:
	const string_view name{"Triangle"};
};
