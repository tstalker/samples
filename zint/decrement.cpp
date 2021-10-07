#include "zint.hpp"

#include <limits>

auto big::zint::operator -- (void) -> zint&
{
	if(sign)
	{
		return decrement();
	}
	else
	{
		return increment();
	}
}

auto big::zint::operator -- (int) -> zint
{
	const auto old(*this);
	--*this;
	return old;
}

auto big::zint::decrement(void) -> zint&
{
	auto action(true);
	if(v.size() == 1 && v.front() == 0)
	{
		action = false;
		sign = false;
		increment();
	}

	for(auto it(v.begin()); it != v.end() && action; it++)
	{
		if(auto& x(*it); x == 0)
		{
			x = numeric_limits <decltype(v)::value_type> ::max();
		}
		else
		{
			action = false;
			x--;
		}
	}

	if(action)
	{
		action = false;
		v.resize(v.size() - 1);
	}

	return *this;
}
