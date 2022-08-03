#pragma once

#include <stdexcept>

namespace gen
{
	using namespace std;
	class myself;
	class myoutrange;
}

class gen::myself
{};

class gen::myoutrange:
	public out_of_range
{
public:
	myoutrange(const size_t i, const char* s):
		out_of_range(s),
		i(i)
	{}

	auto get(void) const
	{
		return i;
	}

private:
	const size_t i{};
};
