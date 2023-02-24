#pragma once

#include "base.hpp"

class derived: public base
{
public:
	derived(void)
	{
		std::cout << "derived::derived(): " << x << ' ' << s << std::endl;
	}

	~derived(void)
	{
		std::cout << "derived::~derived(): " << x << ' ' << s << std::endl;
	}

	auto get(void) const
	{
		return s;
	}

	void print(void) const
	{
		std::cout << x << ' ' << s << std::endl;
	}

private:
	const char* s{"abcdefghijklmnopqrstuvwxyz"};
};
