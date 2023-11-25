#pragma once

#include "base.hpp"

namespace gen
{
	class derived;

	std::ostream& operator << (std::ostream&, const derived&);
}

class gen::derived
	final:
	public base
{
public:
	derived(
		const double f,
		const int i):
		base(f),
		i(i)
	{}

	~derived(void)
	{}

private:
	int i{};

	friend std::ostream& operator << (std::ostream&, const derived&);

public:
	void print(std::ostream&) const override;
};

using gen::operator <<;
