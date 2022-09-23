#pragma once

#include "figure.hpp"

namespace gen
{
	class rectangle;
}

class gen::rectangle final:
	public figure
{
public:
	rectangle(void)
	{}

	rectangle(const initializer_list<double> &z):
		figure(z)
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

	string_view getname(void) const final
	{
		return name;
	}

private:
	const string_view name{"Rectangle"};
};
