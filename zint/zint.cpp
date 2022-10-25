#include "zint.hpp"

#include <utility>
#include <iterator>

union zzz
{
	int i{};
	big::ztype s[sizeof i / sizeof(big::ztype)];
};

big::zint::zint(void)
{}

big::zint::zint(const int x): sign(x >= 0)
{
	const zzz z{sign ? x : -x};
	for(auto it(std::crbegin(z.s)); it != std::crend(z.s); it++)
	{
		if(const auto s(*it); v.size() || s)
		{
			v.push_back(s);
		}
	}
}

big::zint::zint(const zint& z): sign(z.sign), v(z.v)
{}

big::zint::zint(zint&& z): sign(z.sign), v(std::move(z.v))
{}

big::zint::~zint(void)
{}

auto big::zint::operator = (const zint& z) -> zint&
{
	sign = z.sign;
	v = z.v;
	return *this;
}

auto big::zint::operator = (zint&& z) -> zint&
{
	sign = z.sign;
	v = std::move(z.v);
	return *this;
}
