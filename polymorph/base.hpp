#pragma once

#include <iostream>

namespace gen
{
	class base;

	std::ostream& operator << (std::ostream&, const base&);
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

	friend std::ostream& operator << (std::ostream&, const base&);

public:
	decltype(auto)
	get(void)
	const
	{
		return *this;
	}

	virtual void print(std::ostream&) const;
};
