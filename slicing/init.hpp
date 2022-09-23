#pragma once

#include "derived.hpp"
#include "generic.hpp"

#include <algorithm>
#include <functional>

namespace ini
{
	using namespace gen;
	using namespace ier;

template <typename T>
	inline auto make_unique_v(const T&);
template <typename T>
	void Init(T&, const unsigned&);
template <typename T>
	inline auto InitDerived(unsigned&);
template <typename T>
	inline TI<T> InitBase(unsigned&);
template <typename T>
	inline TN<T> InitBase(unsigned&);
}

template <typename T>
void
ini::Init(
	T& v,
	const unsigned& n)
{
	std::generate_n(std::back_inserter(v), n,
	[i{0u}](void)
	mutable
	{
		return InitBase<TV<T>>(i);
	});
}

template <typename T>
auto
ini::InitBase(unsigned& i)
-> TI<T>
{
	return InitDerived<T>(i);
}

template <typename T>
auto
ini::InitBase(unsigned& i)
-> TN<T>
{
	return make_unique_v(InitDerived<TE<T>>(i));
}

template <typename T>
auto
ini::make_unique_v(const T& x)
{
	return std::make_unique<T>(x);
}

template <typename T>
auto
ini::InitDerived(unsigned& i)
{
	const auto f(1.1f);
	const auto j(i++);
	const auto x(f * j);

	if constexpr(std::is_floating_point_v<TypeDerived>)
	{
		return Derived<TE<T>, TypeDerived>(j, x);
	}
	else
	{
		return Derived<TE<T>, TypeDerived>(x, j);
	}
}
