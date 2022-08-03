#pragma once

#include "init.hpp"
#include "print.hpp"

namespace job
{
	using namespace std;

template <typename T>
	void Work(T&, const unsigned&, string_view);
}

template <typename T>
void
job::Work(T& v, const unsigned& n, string_view s)
{
	cout << s << ':' << endl;
	ini::Init(v, n);
	prn::Print(v);
}
