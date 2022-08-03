#pragma once

#include <functional>
#include <string_view>

namespace fib
{
	using namespace std;
	using ulong = unsigned long;
	using deffn = pair<string_view, function<ulong(const ulong)>>;

	void print(const deffn&, const ulong);
	ulong bine(const ulong), cycle(const ulong), recur(const ulong);
}
