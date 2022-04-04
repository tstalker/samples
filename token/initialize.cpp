#include "token.hpp"

#include <random>
#include <functional>

auto token::initialize(const size_t size)
-> ivector
{
	static const auto RANGE(100);
	static uniform_int_distribution<> ud(-RANGE, RANGE);
	static random_device rd;
	static mt19937 re(rd());
	static auto dice(bind(ud, re));

	ivector v;
	generate_n(back_inserter(v), size, dice);
	return v;
}
