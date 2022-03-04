#pragma once

#include "generic.hpp"

#include <iostream>
#include <iterator>
#include <string_view>

namespace prn
{
	using namespace gen;

template <typename T>
	void Print(const T&);
template <typename T>
	void PrintFor(const T&);
template <typename T>
	void PrintEach(const T&);
template <typename T>
	void PrintCopy(const T&);

template <typename T>
	const vector<pair<string_view, function<void(const T&)>>> lst
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
		cout << f.first << ": ";
		f.second(v);
		TW<T>::FlagSpace.reset();
		cout << endl;
	}
}

template <typename T>
void prn::PrintFor(const T& v)
{
	for(auto& x: v)
	{
		invoke(&TW<T>::Print, x);
	}
}

template <typename T>
void prn::PrintEach(const T& v)
{
	auto fn(mem_fn(&TW<T>::Print));
	for_each(v.cbegin(), v.cend(), fn);
}

template <typename T>
void prn::PrintCopy(const T& v)
{
	auto it(ostream_iterator<TV<T>>(cout, " "));
	copy(v.cbegin(), v.cend(), it);
}
