#include <limits>
#include <iostream>
#include <string_view>

namespace gen
{
	using namespace std;

template <typename T, typename U>
	pair<U, U>
	limits{numeric_limits<T>::min(), numeric_limits<T>::max()};
template <>
	pair<string_view, string_view>
	limits<bool, bool>{"false", "true"};
template <>
	pair<short, short>
	limits<char, char>(limits<char, short>);
template <>
	pair<short, short>
	limits<signed char, signed char>(limits<signed char, short>);
template <>
	pair<unsigned short, unsigned short>
	limits<unsigned char, unsigned char>(limits<unsigned char, unsigned short>);
template <>
	pair<unsigned short, unsigned short>
	limits<byte, byte>(limits<unsigned char, unsigned char>);
template <>
	pair<unsigned short, unsigned short>
	limits<char8_t, char8_t>(limits<char8_t, unsigned short>);
template <>
	pair<unsigned short, unsigned short>
	limits<char16_t, char16_t>(limits<char16_t, unsigned short>);
template <>
	pair<unsigned, unsigned>
	limits<char32_t, char32_t>(limits<char32_t, unsigned>);
template <>
	pair<int, int>
	limits<wchar_t, wchar_t>(limits<wchar_t, int>);

template <typename T>
	constexpr string_view gettype(void);
template <typename T>
	void print(void);
}

template <typename T>
void
gen::print(void)
{
	const auto lim(limits<T, T>);
	cout << gettype<T>() << ": " << sizeof(T)
		<< " min: " << lim.first
		<< " max: " << lim.second << endl;
}

template <typename T>
constexpr auto
gen::gettype(void)
-> string_view
{
	if constexpr(is_same_v<T, bool>)
		return "bool";
	else if constexpr(is_same_v<T, char>)
		return "char";
	else if constexpr(is_same_v<T, signed char>)
		return "signed char";
	else if constexpr(is_same_v<T, unsigned char>)
		return "unsigned char";
	else if constexpr(is_same_v<T, byte>)
		return "byte";
	else if constexpr(is_same_v<T, char8_t>)
		return "char8_t";
	else if constexpr(is_same_v<T, char16_t>)
		return "char16_t";
	else if constexpr(is_same_v<T, char32_t>)
		return "char32_t";
	else if constexpr(is_same_v<T, wchar_t>)
		return "wchar_t";
	else if constexpr(is_same_v<T, short>)
		return "short";
	else if constexpr(is_same_v<T, unsigned short>)
		return "unsigned short";
	else if constexpr(is_same_v<T, int>)
		return "int";
	else if constexpr(is_same_v<T, unsigned>)
		return "unsigned int";
	else if constexpr(is_same_v<T, long>)
		return "long";
	else if constexpr(is_same_v<T, unsigned long>)
		return "unsigned long";
	else if constexpr(is_same_v<T, long long>)
		return "long long";
	else if constexpr(is_same_v<T, unsigned long long>)
		return "unsigned long long";
	else if constexpr(is_same_v<T, float>)
		return "float";
	else if constexpr(is_same_v<T, double>)
		return "double";
	else if constexpr(is_same_v<T, long double>)
		return "long double";
	else
		return "Error: wrong type";
}
