#pragma once

#include <iostream>

namespace gen
{
	using namespace std;
	class base;

	ostream& operator << (ostream&, const base&);
}

class gen::base
{
public:
	explicit
	base(
		const double f):
		f(f)
	{}

	virtual
	~base(void)
	{}

private:
	double f{};

	friend ostream& operator << (ostream&, const base&);

public:
	decltype(auto)
	get(void)
	const
	{
		return *this;
	}

	virtual void print(ostream&) const;
};

using gen::operator <<;
