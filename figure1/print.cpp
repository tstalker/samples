#include "figure.hpp"

#include <iomanip>
#include <iterator>

void
gen::print(const vector<const figure*> &v)
{
	for(const auto& p: v)
	{
		print(p);
	}
}

void
gen::print(const figure* p)
{
	cout << p->getname() << " {";
	auto first(true);
	for(const auto& x: p->v)
	{
		if(first)
		{
			first = false;
		}
		else
		{
			cout << ' ';
		}
		cout << x;
	}
	cout << '}' << setprecision(4) << " perimeter: " << p->perimeter() << " area: " << p->area() << std::endl;
}
