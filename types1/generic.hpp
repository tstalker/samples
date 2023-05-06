#pragma once

#include <type_traits>

namespace gen
{
template <typename T>
	using what_char_short = std::conditional_t<std::is_signed_v<T>, short, unsigned short>;
template <typename T>
	using what_char_int = std::conditional_t<std::is_signed_v<T>, int, unsigned>;
template <typename T>
	using what_char = std::conditional_t<sizeof(T) == sizeof(int), what_char_int<T>, what_char_short<T>>;
}
