#include "abc.hpp"
#include "myexcept.hpp"

#include <algorithm>
#include <cstring>
#include <iterator>

const std::size_t MAX(5);

gen::abc::abc(
	const char* s):
n(s ? std::strlen(s) : size_t()),
s(n ? new char[n]{} : nullptr)
{
	if(n <= MAX)
	{
		if(n)
		{
			std::copy_n(s, n, abc::s);
		}
	}
	else
	{
		throw length_exceeded(n);
	}
}

gen::abc::abc(
	const abc& x):
n(this != &x ? x.n : std::size_t()),
s(n ? new char[n]{} : nullptr)
{
	if(n)
	{
		std::copy_n(x.s, n, s);
	}
}

void
gen::abc::print(void)
const
{
	std::cout << *this << std::endl;
}

char&
gen::abc::operator[] (
	const std::size_t& i)
{
	if(i >= n)
	{
		throw std::out_of_range(std::to_string(i) + " out of range");
	}
	return s[i];
}

const char&
gen::abc::operator[] (
	const std::size_t& i)
const
{
	if(i >= n)
	{
		throw std::out_of_range(std::to_string(i) + " out of range");
	}
	return s[i];
}

auto
gen::operator << (std::ostream& os, const abc& x)
-> std::ostream&
{
	if(x.n)
	{
		auto it{std::ostream_iterator<std::remove_pointer_t<decltype(abc::s)>>(os)};
		std::copy_n(x.s, x.n, it);
	}
	return os;
}
