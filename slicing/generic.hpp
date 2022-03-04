#pragma once

#include <type_traits>

namespace gen
{
	using namespace std;

template <typename T>
	using TV = typename T::value_type;
template <typename T>
	using TE = typename T::element_type;
template <typename T>
	using TC = conditional_t<is_copy_constructible_v<T>, T, TE<T>>;
template <typename T>
	using TW = TC<TV<T>>;
template <typename T>
	using TI = enable_if_t<is_copy_constructible_v<T>, T>;
template <typename T>
	using TN = enable_if_t<!is_copy_constructible_v<T>, T>;
}
