#pragma once

#include "base.hpp"

class derived: public base
{
public:
	derived(void);

	~derived(void)
	{
		std::cout << "derived::~derived(): " << id << ' ' << ptr << std::endl;
	}

private:
	char ptr[27]{};
};
