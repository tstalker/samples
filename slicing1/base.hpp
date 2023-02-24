#pragma once

#include <iostream>

class base
{
public:
	base(void)
	{
		std::cout << "base::base(): " << x << std::endl;
	}

	virtual ~base(void)
	{
		std::cout << "base::~base(): " << x << std::endl;
	}

	auto get(void) const
	{
		return x;
	}

	void set(const std::size_t& x)
	{
		base::x = x;
	}

	void print(void) const
	{
		std::cout << x << std::endl;
	}

protected:
	std::size_t x{};
};
