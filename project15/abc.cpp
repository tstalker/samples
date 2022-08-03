#include "abc.hpp"
#include "myexcept.hpp"

#include <cstring>
#include <iterator>

const std::size_t MAX(5);

gen::abc::abc(const char* s):
	n(s ? strlen(s) : size_t()),
	s(n ? new char[n]{} : nullptr)
{
	if(n <= MAX)
	{
		if(n)
		{
			copy_n(s, n, abc::s);
		}
	}
	else
	{
		throw length_exceeded(n);
	}
}

gen::abc::abc(const abc& x):
	n(this != &x ? x.n : size_t()),
	s(n ? new char[n]{} : nullptr)
{
	if(n)
	{
		copy_n(x.s, n, s);
	}
}

void
gen::abc::print(void) const
{
	cout << *this << endl;
}

char&
gen::abc::operator[] (const size_t& i)
{
	if(i >= n)
	{
		throw out_of_range(to_string(i) + " out of range");
	}
	return s[i];
}

const char&
gen::abc::operator[] (const size_t& i) const
{
	if(i >= n)
	{
		throw out_of_range(to_string(i) + " out of range");
	}
	return s[i];
}

auto
gen::operator << (ostream& os, const abc& x)
-> ostream&
{
	if(x.n)
	{
		auto it{ostream_iterator<remove_pointer_t<decltype(abc::s)>>(os)};
		copy_n(x.s, x.n, it);
	}
	return os;
}
