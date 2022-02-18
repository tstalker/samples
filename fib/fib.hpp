#ifdef FIB_HPP
#error Redefined header fib.hpp
#endif

#define FIB_HPP

#include <functional>
#include <string_view>

namespace fib
{
	using namespace std;
	using ulong = unsigned long;
	using culong = const ulong;
	using deffn = pair <string_view, function <ulong(culong)>>;

	void print(const deffn&, culong);
	ulong bine(culong), cycle(culong), recur(culong);
}
