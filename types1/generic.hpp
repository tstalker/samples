#pragma once

#include <type_traits>

namespace gen
{
	using namespace std;

template <typename T>
	using tchar =
	conditional_t<is_signed_v<T>, int, unsigned>;
}
