#pragma once

#include <limits>
#include <iostream>
#include <string_view>

namespace prn
{
	using namespace std;

template <typename T>
	void print(void);
template <typename T, typename U>
	void print(void);
template <typename T, typename U>
	void print(const pair<U, U>&);
template <typename T>
	constexpr string_view gettype(void);
template <typename T, typename U>
	constexpr pair<U, U> getlim(void);
}

template <typename T>
void prn::print(void)
{
	print<T, T>();
}

template <>
void prn::print<std::byte>(void)
{
	print<byte, unsigned short>();
}

template <>
void prn::print<bool>(void)
{
	print<bool, string_view>({"false", "true"});
}

template <>
void prn::print<char>(void)
{
	print<char, short>();
}

template <>
void prn::print<signed char>(void)
{
	print<signed char, short>();
}

template <>
void prn::print<unsigned char>(void)
{
	print<unsigned char, unsigned short>();
}

template <>
void prn::print<char8_t>(void)
{
	print<char8_t, unsigned short>();
}

template <>
void prn::print<char16_t>(void)
{
	print<char16_t, unsigned short>();
}

template <>
void prn::print<char32_t>(void)
{
	print<char32_t, unsigned long>();
}

template <>
void prn::print<wchar_t>(void)
{
	print<wchar_t, unsigned long>();
}

template <typename T, typename U>
void prn::print(void)
{
	print<T, U>(getlim<T, U>());
}

template <typename T, typename U>
void prn::print(const pair<U, U> &p)
{
	cout << gettype<T>() << ": " << sizeof(T) << " min: " << p.first << " max: " << p.second << endl;
}

template <typename T>
constexpr auto prn::gettype(void)
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

template <typename T, typename U>
constexpr auto
prn::getlim(void)
-> pair<U, U>
{
	return {numeric_limits<T>::min(), numeric_limits<T>::max()};
}

template <>
constexpr auto
prn::getlim<std::byte, unsigned short>(void)
-> pair<unsigned short, unsigned short>
{
	return getlim<unsigned char, unsigned short>();
}
