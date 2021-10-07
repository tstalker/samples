#include "zint.hpp"

#include <limits>

auto big::zint::operator ++ (void) -> zint&
{
	if(sign)
	{
		return increment();
	}
	else
	{
		return decrement();
	}
}

auto big::zint::operator ++ (int) -> zint
{
	const auto old(*this);
	++*this;
	return old;
}

auto big::zint::increment(void) -> zint&
{
	auto action(false);
	for(auto it(v.begin()); it != v.end() && !action; it++)
	{
		if(auto& x(*it); x == numeric_limits <decltype(v)::value_type> ::max())
		{
			x = 0;
		}
		else
		{
			action = true;
			x++;
		}
	}

	if(!action)
	{
		action = true;
		v.push_back(1);
	}

	return *this;
}
