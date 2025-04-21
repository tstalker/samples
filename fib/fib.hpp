#pragma once

#include <functional>
#include <string_view>

namespace fib
{
	using ulong = unsigned long;
	using deffn = std::pair<std::string_view, std::function<ulong(const ulong)>>;

	void print(const deffn&, const ulong);
	ulong bine(const ulong), cycle(const ulong), recur(const ulong);
}
