#pragma once

#include "fib.hpp"

#include <limits>
#include <vector>
#include <iostream>

namespace fib
{
	template <typename T> class bignumber;
}

template <typename T> class fib::bignumber
{
public:
	explicit bignumber(void): data{0}
	{}

	explicit bignumber(const T data): data{data}
	{}

	explicit bignumber(const vector<T> &data): data{data}
	{}

	explicit bignumber(const bignumber<T> &data): data{data.data}
	{}

	const bignumber <T> &operator = (const T);
	const bignumber <T> &operator = (const vector<T>&);
	const bignumber <T> &operator = (const bignumber<T>&);
	const bignumber <T> &operator ++ (void);

	constexpr T max(void) const
	{
		return numeric_limits<T>::max();
	}

	bool empty(void) const
	{
		return data.empty();
	}

	void clear(void)
	{
		data.clear();
	}

	size_t size(void) const
	{
		return data.size();
	}

	void push(const T x)
	{
		data.push_back(x);
	}

	void pop(void)
	{
		data.pop_back();
	}

	template <typename U>
	U getelem(const U x) const
	{
		return x;
	}

	short getelem(const char x) const
	{
		return x;
	}

	ushort getelem(const uchar x) const
	{
		return x;
	}

	void print(void) const;

private:
	vector <T> data;
};

template <typename T>
void fib::bignumber<T>::print(void) const
{
	cout << '[';
	auto first(true);
	for(auto p(data.crbegin()); p != data.crend(); p++)
	{
		if(first) first = false;
		else cout << ", ";
		cout << getelem(*p);
	}
	cout << ']';
}

template <typename T>
auto fib::bignumber<T>::operator = (const T x)
-> const bignumber<T>&
{
	clear();
	push(x);
	return *this;
}

template <typename T>
auto fib::bignumber<T>::operator = (const vector<T> &x)
-> const bignumber<T>&
{
	data = x;
	return *this;
}

template <typename T>
auto fib::bignumber<T>::operator = (const bignumber<T>&x)
-> const bignumber<T>&
{
	data = x.data;
	return *this;
}

template <typename T>
auto fib::bignumber<T>::operator ++ (void)
-> const bignumber<T>&
{
	if(empty())
	{
		cerr << "error: data is empty" << endl;
		exit(EXIT_FAILURE);
	}

	for(size_t i{}; i < size(); i++)
	{
		if(data[i] < max())
		{
			data[i]++;
			break;
		}
		data[i] = 0;
		if(i + 1 == size())
		{
			push(1);
			break;
		}
	}
	return *this;
}
