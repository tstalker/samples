#include "token.hpp"

#include <algorithm>
#include <random>
#include <functional>

auto token::initialize(const std::size_t size)
-> ivector
{
	static const auto RANGE(100);
	static std::uniform_int_distribution<> ud(-RANGE, RANGE);
	static std::random_device rd;
	static std::mt19937 re(rd());
	static auto dice(std::bind(ud, re));

	ivector v;
	std::generate_n(std::back_inserter(v), size, dice);
	return v;
}
