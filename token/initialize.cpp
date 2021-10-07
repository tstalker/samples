#include "token.hpp"

#include <random>
#include <functional>

auto token::initialize(csizet MAX) -> ivector
{
	static const auto RANGE(100);
	static uniform_int_distribution <> uid(-RANGE, RANGE);
	static random_device rd;
	static mt19937 mt(rd());
	static auto dice(bind(uid, mt));

	ivector v;
	for(size_t i{}; i < MAX; i++)
		v.emplace_back(dice());
	return v;
}
