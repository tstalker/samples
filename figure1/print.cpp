#include "figure.hpp"

#include <iomanip>
#include <iterator>
#include <algorithm>

void geom::print(const vector <const figure*> &v)
{
	for(const auto& p: v)
		print(p);
}

void geom::print(const figure* p)
{
	cout << p->getname() << " { ";
	copy(p->v.cbegin(), p->v.cend(), ostream_iterator <double> (cout, " "));
	cout << '}' << setprecision(4) << " perimeter: " << p->perimeter() << " area: " << p->area() << std::endl;
}
