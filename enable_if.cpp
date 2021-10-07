#include <utility>
#include <iostream>
#include <type_traits>

using namespace std;

template<typename C, typename T, typename F>
typename enable_if<C::value, T&&>::type select(T&& t, F&&)
{
	return forward<T>(t);
}

template<typename C, typename T, typename F>
typename enable_if<!C::value, F&&>::type select(T&&, F&& f)
{
	return forward<F>(f);
}

int main(void)
{
	cout << select<is_integral<float>>(12345, 3.14f) << endl;
}
