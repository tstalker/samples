#include "sample.hpp"

gen::sample::sample(value_type x):
	x(x)
{
	if(name.empty())
	{
		name = __func__;
	}

	std::cout << name << "::" << __func__ << '(' << x << ") -> " << *this << std::endl;
}

gen::sample::sample(const sample& src):
	x(src.x)
{
	if(name.empty())
	{
		name = __func__;
	}

	std::cout << name << "::" << __func__ << '(' << src << ") -> " << *this << std::endl;
}

gen::sample::sample(sample&& src) noexcept:
	x(src.x)
{
	if(name.empty())
	{
		name = __func__;
	}

	std::cout << name << "::" << __func__ << "(&&" << src << ") -> " << *this << std::endl;
	src.clear();
}

auto gen::sample::operator = (const sample& src)
-> const sample&
{
	if(this != &src)
	{
		x = src.x;
		std::cout << name << "::" << __func__ << '(' << src << ") -> " << *this << std::endl;
	}
	else
	{
		std::cerr << name << "::" << __func__ << '(' << src << "): Error: assignment to itself" << std::endl;
	}

	return *this;
}

auto gen::sample::operator = (sample&& src) noexcept
-> sample&
{
	if(this != &src)
	{
		x = src.x;
		std::cout << name << "::" << __func__ << "(&&" << src << ") -> " << *this << std::endl;
		src.clear();
	}
	else
	{
		std::cerr << name << "::" << __func__ << '(' << src << "): Error: assignment to itself" << std::endl;
	}

	return *this;
}

auto gen::operator << (std::ostream& os, const sample& src)
-> std::ostream&
{
	os << '[' << src.x << ']';
	return os;
}
