#ifdef DECODE_HPP
#error Redefined header Decode.hpp
#endif

#define DECODE_HPP

#ifndef GENERIC_HPP
#include "Generic.hpp"
#endif

#include <string_view>

namespace Decode
{
	using namespace Generic;

	void Parse(string_view, string_view);
}
