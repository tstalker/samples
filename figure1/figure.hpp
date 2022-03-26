#pragma once

#include <numeric>
#include <iostream>
#include <functional>
#include <string_view>

namespace geom
{
	using namespace std;
	class figure;

	void print(const figure*);
	void print(const vector<const figure*>&);
}

class geom::figure
{
public:
	figure(void)
	{}

	figure(const initializer_list<double> &z):
		v(z)
	{}

	virtual ~figure(void)
	{}

	virtual string_view getname(void) const = 0;
	virtual double area(void) const = 0;
	virtual double perimeter(void) const = 0;

	auto sum(void) const
	{
		return accumulate(v.cbegin(), v.cend(), double());
	}

	auto multiply(void) const
	{
		return accumulate(v.cbegin(), v.cend(), 1., multiplies<double>());
	}

protected:
	vector<double> v;
	static const double PI;

	friend void print(const figure*);
};
