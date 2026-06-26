#pragma once

#include <type_traits>

namespace gen
{
template <typename T>
	using TV = typename T::value_type;
template <typename T>
	using TE = typename T::element_type;
template <typename T>
	using TC = std::conditional_t<std::is_copy_constructible_v<T>, T, TE<T>>;
template <typename T>
	using TW = TC<TV<T>>;
template <typename T>
	using TI = std::enable_if_t<std::is_copy_constructible_v<T>, T>;
template <typename T>
	using TN = std::enable_if_t<!std::is_copy_constructible_v<T>, T>;
}
