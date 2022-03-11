#pragma once

#include <iostream>

namespace geo
{
	using namespace std;
	enum class figure_type: char;
	class figure;
	ostream& operator << (ostream&, const figure&);
}

using geo::operator <<;

enum class geo::figure_type: char
{
	NOT_FIGURE,
	CIRCLE,
	TRIANGLE,
	SQUARE,
	RECTANGLE
};

class geo::figure
{
public:
	figure(void)
	{}

	figure(const figure_type t, double x, double y = double(), double z = double()):
		t(t),
		x(x),
		y(y),
		z(z)
	{}

	double area(void) const;
	double perimeter(void) const;

private:
	figure_type t{figure_type::NOT_FIGURE};
	double x{}, y{}, z{};

	static const double PI;

	friend ostream& operator << (ostream&, const figure&);
};
