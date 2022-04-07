#include <iostream>
#include <type_traits>

template <typename T, std::enable_if_t<!std::is_reference_v<T>, bool> = true>
using rval = T;

template <typename T>
void f(rval<T>&&)
{
	std::cout << "rvalue_reference" << std::endl;
}

template <typename T>
void f(T&)
{
	std::cout << "lvalue_reference" << std::endl;
}

int main()
{
	f(int());
	int i{};
	f(i);
	return EXIT_SUCCESS;
}
