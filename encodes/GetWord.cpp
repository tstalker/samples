#include "Generic.hpp"

#include <random>

auto gen::GetWord(const unsigned& n)
-> std::string
{
	static std::uniform_int_distribution<short> ud('a', 'z' + 1);
	std::mt19937 mt(n);
	std::string w;

	for(decltype(ud)::result_type c; (c = ud(mt)) != ud.max();)
	{
		w += c;
	}

	return w;
}
