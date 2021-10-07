#ifdef CIRCLE_HPP
#error Redefined header circle.hpp
#endif

#define CIRCLE_HPP

#ifndef FIGURE_HPP
#include "figure.hpp"
#endif

#include <cmath>

namespace geom
{
	class circle;
}

class geom::circle final: public figure
{
public:
	circle(void)
	{}

	circle(const vector <double> &v): figure(v)
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

	string getname(void) const final
	{
		return name;
	}

private:
	const string name{"Circle"};
};
