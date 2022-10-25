#pragma once

#include <limits>
#include <iostream>
#include <string_view>

namespace gen
{
template <typename T>
	using tchar = std::conditional_t<std::is_signed_v<T>, long, unsigned long>;

template <typename T>
	std::pair<T, T>
	getlim
	{
		std::numeric_limits<T>::min(),
		std::numeric_limits<T>::max()
	};

template <typename T>
	void print(void);
template <typename T>
	void print(const std::pair<tchar<T>, tchar<T>>&);

template <typename T>
	constexpr std::string_view gettype(void);
}

template <typename T>
void gen::print(void)
{
	print<T>(getlim<T>);
}

template <typename T>
void gen::print(const std::pair<tchar<T>, tchar<T>> &p)
{
	std::cout << gettype<T>() << ": " << sizeof(T)
		<< " min: " << p.first
		<< " max: " << p.second
		<< std::endl;
}

template <typename T>
constexpr std::string_view gen::gettype(void)
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
