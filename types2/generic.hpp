#pragma once

#include <limits>
#include <iomanip>
#include <iostream>
#include <string_view>

namespace gen
{
template <typename T>
	using what_char_short = std::conditional_t<std::is_signed_v<T>, short, unsigned short>;
template <typename T>
	using what_char_int = std::conditional_t<std::is_signed_v<T>, int, unsigned>;
template <typename T>
	using what_char = std::conditional_t<sizeof(T) == sizeof(int), what_char_int<T>, what_char_short<T>>;

template <typename T>
	std::pair<T, T>
	getlim
	{
		std::numeric_limits<T>::min(),
		std::numeric_limits<T>::max()
	};

template <>
	std::pair
	<
		what_char<char>,
		what_char<char>
	>
	getlim<char>
	{
		std::numeric_limits<char>::min(),
		std::numeric_limits<char>::max()
	};

template <>
	std::pair
	<
		what_char<signed char>,
		what_char<signed char>
	>
		getlim<signed char>
	{
		std::numeric_limits<signed char>::min(),
		std::numeric_limits<signed char>::max()
	};

template <>
	std::pair
	<
		what_char<unsigned char>,
		what_char<unsigned char>
	>
		getlim<unsigned char>
	{
		std::numeric_limits<unsigned char>::min(),
		std::numeric_limits<unsigned char>::max()
	};

template <>
	std::pair
	<
		what_char<char8_t>,
		what_char<char8_t>
	>
		getlim<char8_t>
	{
		std::numeric_limits<char8_t>::min(),
		std::numeric_limits<char8_t>::max()
	};

template <>
	std::pair
	<
		what_char<char16_t>,
		what_char<char16_t>
	>
		getlim<char16_t>
	{
		std::numeric_limits<char16_t>::min(),
		std::numeric_limits<char16_t>::max()
	};

template <>
	std::pair
	<
		what_char<char32_t>,
		what_char<char32_t>
	>
		getlim<char32_t>
	{
		std::numeric_limits<char32_t>::min(),
		std::numeric_limits<char32_t>::max()
	};

template <>
	std::pair
	<
		what_char<wchar_t>,
		what_char<wchar_t>
	>
		getlim<wchar_t>
	{
		std::numeric_limits<wchar_t>::min(),
		std::numeric_limits<wchar_t>::max()
	};

template <typename T>
	void print(void);

template <typename T>
	constexpr std::string_view gettype(void);
}

template <typename T>
void gen::print(void)
{
	const auto m(getlim<T>);

	std::cout << gettype<T>() << ": " << sizeof(T) << std::hex
		<< " min: " << m.first
		<< " max: " << m.second
		<< std::endl;
}

template <>
void gen::print<bool>(void)
{
	const auto m(getlim<bool>);

	std::cout << gettype<bool>() << ": " << sizeof(bool) << std::boolalpha
		<< " min: " << m.first
		<< " max: " << m.second
		<< std::endl;
}

template <typename T>
constexpr auto gen::gettype(void) -> std::string_view
{
	if constexpr(std::is_same_v<T, bool>)
		return "bool";
	else if constexpr(std::is_same_v<T, char>)
		return "char";
	else if constexpr(std::is_same_v<T, signed char>)
		return "signed char";
	else if constexpr(std::is_same_v<T, unsigned char>)
		return "unsigned char";
	else if constexpr(std::is_same_v<T, char8_t>)
		return "char8_t";
	else if constexpr(std::is_same_v<T, char16_t>)
		return "char16_t";
	else if constexpr(std::is_same_v<T, char32_t>)
		return "char32_t";
	else if constexpr(std::is_same_v<T, wchar_t>)
		return "wchar_t";
	else if constexpr(std::is_same_v<T, short>)
		return "short";
	else if constexpr(std::is_same_v<T, unsigned short>)
		return "unsigned short";
	else if constexpr(std::is_same_v<T, int>)
		return "int";
	else if constexpr(std::is_same_v<T, unsigned>)
		return "unsigned int";
	else if constexpr(std::is_same_v<T, long>)
		return "long";
	else if constexpr(std::is_same_v<T, unsigned long>)
		return "unsigned long";
	else if constexpr(std::is_same_v<T, long long>)
		return "long long";
	else if constexpr(std::is_same_v<T, unsigned long long>)
		return "unsigned long long";
	else if constexpr(std::is_same_v<T, float>)
		return "float";
	else if constexpr(std::is_same_v<T, double>)
		return "double";
	else if constexpr(std::is_same_v<T, long double>)
		return "long double";
	else
		return "Error: wrong type";
}
