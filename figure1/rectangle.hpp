#ifdef RECTANGLE_HPP
#error Redefined header rectangle.hpp
#endif

#define RECTANGLE_HPP

#ifndef FIGURE_HPP
#include "figure.hpp"
#endif

namespace geom
{
	class rectangle;
}

class geom::rectangle final: public figure
{
public:
	rectangle(void)
	{}

	rectangle(const vector <double> &v): figure(v)
	{}

	~rectangle(void) final
	{}

	double area(void) const final
	{
		return multiply();
	}

	double perimeter(void) const final
	{
		return 2 * sum();
	}

	string getname(void) const final
	{
		return name;
	}

private:
	const string name{"Rectangle"};
};
