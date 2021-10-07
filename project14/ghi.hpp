#ifndef GHI_HPP
#define GHI_HPP

#include <iostream>

class ghi
{
public:
	ghi(void)
	{}

	virtual ~ghi(void)
	{}

	virtual void print(void) const = 0;
};

#endif
