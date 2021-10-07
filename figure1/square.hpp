#ifdef SQUARE_HPP
#error Redefined header square.hpp
#endif

#define SQUARE_HPP

#ifndef FIGURE_HPP
#include "figure.hpp"
#endif

#include <cmath>

namespace geom
{
	class square;
}

class geom::square final: public figure
{
public:
	square(void)
	{}

	square(const vector <double> &v): figure(v)
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

	string getname(void) const final
	{
		return name;
	}

private:
	const string name{"Square"};
};
