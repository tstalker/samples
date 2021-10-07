#ifdef TRIANGLE_HPP
#error Redefined header triangle.hpp
#endif

#define TRIANGLE_HPP

#ifndef FIGURE_HPP
#include "figure.hpp"
#endif

namespace geom
{
	class triangle;
}

class geom::triangle final: public figure
{
public:
	triangle(void)
	{}

	triangle(const vector <double> &v): figure(v)
	{}

	~triangle(void) final
	{}

	double area(void) const final;

	double perimeter(void) const final
	{
		return sum();
	}

	string getname(void) const final
	{
		return name;
	}

private:
	const string name{"Triangle"};
};
