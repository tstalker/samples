#ifdef FIGURE_HPP
#error Redefined header figure.hpp
#endif

#define FIGURE_HPP

#include <string>
#include <vector>
#include <numeric>
#include <iostream>
#include <functional>

namespace geom
{
	using namespace std;
	class figure;
	void print(const figure*);
	void print(const vector <const figure*>&);
}

class geom::figure
{
public:
	figure(void)
	{}

	figure(const vector <double> &v): v(v)
	{}

	virtual ~figure(void)
	{}

	virtual string getname(void) const = 0;
	virtual double area(void) const = 0;
	virtual double perimeter(void) const = 0;

	double sum(void) const
	{
		return accumulate(v.cbegin(), v.cend(), 0);
	}

	double multiply(void) const
	{
		return accumulate(v.cbegin(), v.cend(), 1, multiplies <double> ());
	}

protected:
	vector <double> v;
	static const double PI;

	friend void print(const figure*);
};
