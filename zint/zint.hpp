#ifdef ZINT_HPP
#error Redefined header zint.hpp
#endif

#define ZINT_HPP

#include <vector>
#include <iostream>

namespace big
{
	using namespace std;
	using ztype = unsigned char;
	class zint;
	ostream& operator << (ostream&, const zint&);
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

	bool sign { true };
	vector <ztype> v;

	friend ostream& operator << (ostream&, const zint&);
};

using big::operator <<;
