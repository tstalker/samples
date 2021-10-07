#ifdef MYEXCEPT_HPP
#error Redefined header myexcept.hpp
#endif

#define MYEXCEPT_HPP

#include <stdexcept>

class myself
{};

class myoutrange: public std::out_of_range
{
public:
	myoutrange(const size_t i, const char* s): std::out_of_range(s), i(i)
	{}

	auto get(void) const
	{
		return i;
	}

private:
	const size_t i;
};
