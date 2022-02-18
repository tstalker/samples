#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T, const std::size_t N> void fill(T(&v)[N])
{
	T n{};
	std::generate(std::begin(v), std::end(v), [&n]{ return n++; });
}

template <typename T, const std::size_t N> void print(const T(&v)[N])
{
	std::copy(std::cbegin(v), std::cend(v), std::ostream_iterator <T> (std::cout, " "));
	std::cout << std::endl;
}

int main(void)
{
	int v[10];
	fill(v);
	print(v);
	return EXIT_SUCCESS;
}
