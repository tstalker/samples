#ifdef WORK_HPP
#error Redefined header work.hpp
#endif

#define WORK_HPP

#include "init.hpp"
#include "print.hpp"

namespace job
{
template <typename T>
	void Work(T&, const unsigned&, std::string_view);
}

template <typename T>
void job::Work(T& v, const unsigned& n, std::string_view s)
{
	std::cout << s << ':' << std::endl;
	ini::Init(v, n);
	prn::Print(v);
}
