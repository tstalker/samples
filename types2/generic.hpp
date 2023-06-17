#pragma once

#include <limits>
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
	using what_char_pair = std::pair<what_char<T>, what_char<T>>;

template <typename T>
	std::pair<T, T> limit
	{
		std::numeric_limits<T>::min(),
		std::numeric_limits<T>::max()
	};

template <typename T>
	what_char_pair<T> limit_char
	{
		std::numeric_limits<T>::min(),
		std::numeric_limits<T>::max()
	};

template <typename T>
	void print(void);

template <typename T>
	constexpr std::string_view get_type(void);
}

template <>
gen::what_char_pair<char>
gen::limit<char> {limit_char<char>};

template <>
gen::what_char_pair<signed char>
gen::limit<signed char> {limit_char<signed char>};

template <>
gen::what_char_pair<unsigned char>
gen::limit<unsigned char> {limit_char<unsigned char>};

template <>
gen::what_char_pair<char8_t>
gen::limit<char8_t> {limit_char<char8_t>};

template <>
gen::what_char_pair<char16_t>
gen::limit<char16_t> {limit_char<char16_t>};

template <>
gen::what_char_pair<char32_t>
gen::limit<char32_t> {limit_char<char32_t>};

template <>
gen::what_char_pair<wchar_t>
gen::limit<wchar_t> {limit_char<wchar_t>};

template <typename T>
void gen::print(void)
{
	std::cout << get_type<T>() << ": " << sizeof(T)
		<< " min: " << limit<T>.first
		<< " max: " << limit<T>.second
		<< std::endl;
}

template <>
void gen::print<bool>(void)
{
	std::cout << get_type<bool>() << ": " << sizeof(bool) << std::boolalpha
		<< " min: " << limit<bool>.first
		<< " max: " << limit<bool>.second
		<< std::endl;
}

template <typename T>
constexpr auto gen::get_type(void) -> std::string_view
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
