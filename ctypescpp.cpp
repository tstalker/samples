#include <cstdio>
#include <limits>
#include <string>

template <typename T> void print(const std::string& t, const std::string& f)
{
	const auto s(t + ": %zu min: %" + f + " max: %" + f + "\n");
	printf(s.c_str(), sizeof(T), std::numeric_limits<T>::min(), std::numeric_limits<T>::max());
}

int main(void)
{
	print<bool>("bool", "u");

	print<char>("char", "d");
	print<signed char>("signed char", "d");
	print<unsigned char>("unsigned char", "u");
	print<wchar_t>("wchar_t", "u");
	print<char16_t>("char16_t", "u");
	print<char32_t>("char32_t", "u");

	print<short>("short", "d");
	print<signed short>("signed short", "d");
	print<unsigned short>("unsigned short", "u");
	print<int>("int", "d");
	print<signed>("signed int", "d");
	print<unsigned>("unsigned int", "u");
	print<long>("long", "ld");
	print<signed long>("signed long", "ld");
	print<unsigned long>("unsigned long", "lu");
	print<long long>("long long", "lld");
	print<signed long long>("signed long long", "lld");
	print<unsigned long long>("unsigned long long", "llu");

	print<float>("float", "g");
	print<double>("double", "lg");
	print<long double>("long double", "Lg");
}
