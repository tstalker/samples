#include "mystring.hpp"

auto
gen::mystring::operator [] (const size_t i)
-> char&
{
	checkrange(i);
	return ptr[i];
}

auto
gen::mystring::operator [] (const size_t i)
const
-> const char&
{
	checkrange(i);
	return ptr[i];
}

auto
gen::mystring::operator () (const size_t i)
-> char&
{
	checkrange(i);
	return ptr[i];
}

auto
gen::mystring::operator () (const size_t i)
const
-> const char&
{
	checkrange(i);
	return ptr[i];
}
