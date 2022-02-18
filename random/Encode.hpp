#ifdef ENCODE_HPP
#error Redefined header Encode.hpp
#endif

#define ENCODE_HPP

#ifndef GENERIC_HPP
#include "Generic.hpp"
#endif

#include <string_view>

namespace Encode
{
	using namespace Generic;

	void Parse(string_view, string_view);
}
