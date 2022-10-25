#pragma once

#include <vector>
#include <iostream>

namespace big
{
	using ztype = unsigned char;
	class zint;
	std::ostream& operator << (std::ostream&, const zint&);
}

class big::zint
{
public:
	zint(void);
	zint(const int);
	zint(const zint&);
	zint(zint&&);
	~zint(void);

	zint& operator = (const zint&);
	zint& operator = (zint&&);
	zint& operator ++ (void);
	zint operator ++ (int);
	zint& operator -- (void);
	zint operator -- (int);

private:
	zint& increment(void);
	zint& decrement(void);

	bool sign{true};
	std::vector<ztype> v;

	friend std::ostream& operator << (std::ostream&, const zint&);
};

using big::operator <<;
