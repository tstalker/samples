#include <utility>
#include <iostream>

namespace gen
{
	using namespace std;

template<typename C, typename T, typename F>
	enable_if<C::value, T&&>::type
	select(T&&, F&&);

template<typename C, typename T, typename F>
	enable_if<!C::value, F&&>::type
	select(T&&, F&&);
}

template<typename C, typename T, typename F>
std::enable_if<C::value, T&&>::type
gen::select(T&& t, F&&)
{
	return forward<T>(t);
}

template<typename C, typename T, typename F>
std::enable_if<!C::value, F&&>::type
gen::select(T&&, F&& f)
{
	return forward<F>(f);
}

int main(void)
{
	std::cout << gen::select<std::is_integral<int>>(12345, 3.14) << std::endl;
	std::cout << gen::select<std::is_integral<float>>(12345, 3.14) << std::endl;
	return EXIT_SUCCESS;
}
