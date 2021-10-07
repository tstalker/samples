#ifdef INIT_HPP
#error Redefined header init.hpp
#endif

#define INIT_HPP

#ifndef DERIVED_HPP
#include "derived.hpp"
#endif

#ifndef GENERIC_HPP
#include "generic.hpp"
#endif

#include <algorithm>
#include <functional>

namespace ini
{
template <typename T>
	inline auto make_unique_v(const T&);
template <typename T>
	void Init(T&, const unsigned&);
template <typename T>
	inline auto InitDerived(unsigned&);
template <typename T>
	inline gen::TI <T> InitBase(unsigned&);
template <typename T>
	inline gen::TN <T> InitBase(unsigned&);
}

template <typename T>
void ini::Init(T& v, const unsigned& n)
{
	std::generate_n(std::back_inserter(v), n,
	[i { 0u }](void) mutable
	{
		return InitBase <gen::TV <T>>(i);
	});
}

template <typename T>
auto ini::InitBase(unsigned& i)
-> gen::TI <T>
{
	return InitDerived <T>(i);
}

template <typename T>
auto ini::InitBase(unsigned& i)
-> gen::TN <T>
{
	return make_unique_v(InitDerived <gen::TE <T>>(i));
}

template <typename T>
auto ini::make_unique_v(const T& x)
{
	return std::make_unique <T>(x);
}

template <typename T>
auto ini::InitDerived(unsigned& i)
{
	return [f(1.1f), i(i++)]
	{
		const auto x(f * i);

	if constexpr(std::is_floating_point_v <TypeDerived>)
		{
			return ier::Derived <gen::TE <T>, TypeDerived>(i, x);
		}
		else
		{
			return ier::Derived <gen::TE <T>, TypeDerived>(x, i);
		}
	}();
}
