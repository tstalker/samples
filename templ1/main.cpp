#include <iostream>
#include <iterator>

template<class T>
std::enable_if_t<std::rank_v<T> == 1>
print(const T& v)
{
	auto it(std::ostream_iterator<std::remove_extent_t<T>>(std::cout, " "));
	std::copy_n(v, std::extent_v<T>, it);
	std::cout << std::endl;
}

int main(void)
{
	const int v[][3]
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};
	print(v[0]);
	print(v[1]);
	return EXIT_SUCCESS;
}
