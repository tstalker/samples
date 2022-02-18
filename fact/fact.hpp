#ifdef FACT_HPP
#error Redefined header fact.hpp
#endif

#define FACT_HPP

using ull = unsigned long long;

template <ull N>
class Factorial
{
public:
	static const ull value { N * Factorial <N - 1> ::value };
};

template <>
class Factorial <0>
{
public:
	static const ull value { 1 };
};

template <ull N>
const ull value { N * value <N - 1> };

template <>
const ull value <0> { 1 };

constexpr ull fact(const ull x)
{
	return x ? x * fact(x - 1) : 1;
}
