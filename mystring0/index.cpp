#include "mystring.hpp"

auto
mystring::operator [] (const std::size_t i)
-> char&
{
	checkrange(i);
	return ptr[i];
}

auto
mystring::operator [] (const std::size_t i) const
-> const char&
{
	checkrange(i);
	return ptr[i];
}

auto
mystring::operator () (const std::size_t i)
-> char&
{
	checkrange(i);
	return ptr[i];
}

auto
mystring::operator () (const std::size_t i) const
-> const char&
{
	checkrange(i);
	return ptr[i];
}
