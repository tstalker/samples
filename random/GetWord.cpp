#include "Generic.hpp"

#include <random>

auto gen::GetWord(const unsigned& n)
-> string
{
	mt19937 mt(n);
	static uniform_int_distribution<char> ud('a', 'z' + 1);
	string w;
	for(decltype(ud)::result_type c; (c = ud(mt)) != ud.max();)
	{
		w += c;
	}
	return w;
}
