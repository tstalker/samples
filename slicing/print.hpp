#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#ifndef GENERIC_HPP
#include "generic.hpp"
#endif

#include <iostream>
#include <iterator>
#include <string_view>

namespace prn
{
template <typename T>
	void Print(const T&);
template <typename T>
	void PrintFor(const T&);
template <typename T>
	void PrintEach(const T&);
template <typename T>
	void PrintCopy(const T&);

template <typename T>
	const std::vector<std::pair<std::string_view, std::function<void(const T&)>>> lst
	{
		{ "for ", PrintFor<T> },
		{ "each", PrintEach<T> },
		{ "copy", PrintCopy<T> }
	};
}

template <typename T>
void prn::Print(const T& v)
{
	for(auto& f: lst<T>)
	{
		std::cout << f.first << ": ";
		f.second(v);
		gen::TW<T>::FlagSpace.reset();
		std::cout << std::endl;
	}
}

template <typename T>
void prn::PrintFor(const T& v)
{
	for(auto& x: v)
	{
		std::invoke(&gen::TW<T>::Print, x);
	}
}

template <typename T>
void prn::PrintEach(const T& v)
{
	std::for_each(v.cbegin(), v.cend(), std::mem_fn(&gen::TW<T>::Print));
}

template <typename T>
void prn::PrintCopy(const T& v)
{
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator<gen::TV<T>>(std::cout, " "));
}
