#pragma once

#include "base.hpp"

namespace gen
{
	class derived;

	ostream& operator << (ostream&, const derived&);
}

class gen::derived final:
	public base
{
public:
	derived(const double f, const int i): base(f), i(i)
	{}

	~derived(void)
	{}

private:
	int i{};

	friend ostream& operator << (ostream&, const derived&);

public:
	void print(ostream&) const override;
};

using gen::operator <<;
