#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

inline std::string operator "" _s(const char* s, const std::size_t n)
{
	return std::string(s, n);
}

namespace prn
{
	template <typename T> inline void print(const T& t)
	{
		std::cout << t;
	}

	void print(const bool& b)
	{
		std::cout << (b ? "true"_s : "false"_s);
	}

	inline void print(const float& f)
	{
		std::cout << std::setprecision(3) << f;
	}

	inline void print(const double& d)
	{
		std::cout << std::setprecision(8) << d;
	}

	template <typename T, typename... U> void print(const T& t, const U&... u)
	{
		print(t);
		std::cout << ", ";
		print(u...);
	}
}

inline void print(void)
{
	std::cout << std::endl;
}

template <typename... T> void print(const T&... t)
{
	prn::print(t...);
	print();
}

int main(void)
{
	print();
	print(true);
	print(true, 123456789);
	print(true, 123456789, 123456789123456789ll);
	print(true, 123456789, 123456789123456789ll, 3.14f);
	print(true, 123456789, 123456789123456789ll, 3.14f, 3.1415926);
	print(true, 123456789, 123456789123456789ll, 3.14f, 3.1415926, 'a');
	print(true, 123456789, 123456789123456789ll, 3.14f, 3.1415926, 'a', "abcde");
	print(true, 123456789, 123456789123456789ll, 3.14f, 3.1415926, 'a', "abcde", "string"_s);
	return EXIT_SUCCESS;
}
