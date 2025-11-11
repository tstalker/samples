#pragma once

#include <cstddef>
#include <stdexcept>

namespace gen
{
	class myself;
	class myoutrange;
}

class gen::myself
{};

class gen::myoutrange:
	public std::out_of_range
{
public:
	myoutrange(const std::size_t i, const char* s):
		std::out_of_range(s),
		i(i)
	{}

	~myoutrange(void)
	{}

	auto get(void) const
	{
		return i;
	}

private:
	const std::size_t i{};
};
