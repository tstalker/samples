#pragma once

namespace prn
{
	using ull = unsigned long long;

template <ull N>
	class Factorial;
template <>
	class Factorial<0>;

template <ull N>
	const ull value{N * value<N - 1>};
template <>
	const ull value<0>{1};

	constexpr ull fact(const ull);
}

template <prn::ull N>
class prn::Factorial
{
public:
	static const ull value{N * Factorial<N - 1>::value};
};

template <>
class prn::Factorial<0>
{
public:
	static const ull value{1};
};

constexpr auto
prn::fact(const ull x)
-> ull
{
	return x ? x * fact(x - 1) : 1;
}
