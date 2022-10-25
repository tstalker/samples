#pragma once

#include <type_traits>

namespace gen
{
template <typename T>
	using tchar =
	std::conditional_t<std::is_signed_v<T>, int, unsigned>;
}
