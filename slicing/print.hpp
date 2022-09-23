#pragma once

#include "generic.hpp"

#include <iostream>
#include <iterator>
#include <string_view>

namespace prn
{
	using namespace gen;
template <typename T>
	using list_type = std::pair<std::string_view, std::function<void(const T&)>>;

template <typename T>
	void Print(const T&);
template <typename T>
	void PrintFor(const T&);
template <typename T>
	void PrintEach(const T&);
template <typename T>
	void PrintCopy(const T&);

template <typename T>
	const std::vector<list_type<T>> lst
	{
		{"for ", PrintFor<T>},
		{"each", PrintEach<T>},
		{"copy", PrintCopy<T>}
	};
}

template <typename T>
void
prn::Print(const T& v)
{
	for(auto& f: lst<T>)
	{
		std::cout << f.first << ": ";
		f.second(v);
		TW<T>::FlagSpace.reset();
		std::cout << std::endl;
	}
}

template <typename T>
void
prn::PrintFor(const T& v)
{
	for(auto& x: v)
	{
		std::invoke(&TW<T>::Print, x);
	}
}

template <typename T>
void
prn::PrintEach(const T& v)
{
	auto fn(std::mem_fn(&TW<T>::Print));
	std::for_each(v.cbegin(), v.cend(), fn);
}

template <typename T>
void
prn::PrintCopy(const T& v)
{
	auto it(std::ostream_iterator<TV<T>>(std::cout, " "));
	std::copy(v.cbegin(), v.cend(), it);
}
