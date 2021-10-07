#include <tuple>
#include <string>
#include <iomanip>
#include <iostream>

inline auto operator "" _s(const char *s, const size_t n)
{
	return std::string(s, n);
}

using ttt = std::tuple<bool, short, int, long long, float, double, char, const char*, std::string>;

template <typename T> void print(const ttt& t)
{
	std::cout << std::get<T>(t) << std::endl;
}

template <> void print<bool>(const ttt& t)
{
	std::cout << (std::get<bool>(t) ? "true" : "false") << std::endl;
}

template <> void print<double>(const ttt& t)
{
	std::cout << std::setprecision(8) << std::get<double>(t) << std::endl;
}

int main(void)
{
	const ttt t{true, 123, 123456789, 123456789123456789ll, 1.23f, 3.1415926, 'a', "abcde", "string"_s};
	print<bool>(t);
	print<short>(t);
	print<int>(t);
	print<long long>(t);
	print<float>(t);
	print<double>(t);
	print<char>(t);
	print<const char*>(t);
	print<std::string>(t);
}
