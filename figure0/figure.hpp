#ifdef FIGURE_HPP
#error Redefined header figure.hpp
#endif

#define FIGURE_HPP

#include <iostream>

namespace geom
{
	using namespace std;
	using type_figure = char;
	enum class figure_type: type_figure;
	class figure;
}

std::ostream& operator << (std::ostream&, const geom::figure&);

enum class geom::figure_type: geom::type_figure
{
	NOT_FIGURE,
	CIRCLE,
	TRIANGLE,
	SQUARE,
	RECTANGLE
};

class geom::figure
{
public:
	figure(void)
	{}

	figure(const figure_type t, double x, double y = 0, double z = 0): t(t), x(x), y(y), z(z)
	{}

	double area(void) const;
	double perimeter(void) const;

private:
	figure_type t{figure_type::NOT_FIGURE};
	double x{}, y{}, z{};
	static const double PI;

	friend std::ostream& ::operator << (std::ostream&, const figure&);
};
