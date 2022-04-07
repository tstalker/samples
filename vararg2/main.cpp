#include <string>
#include <iostream>

namespace prn
{
	using namespace std;

	string operator "" _s(const char*, const size_t);
	void print(void);
	template <typename T> void print(const T&);
	template <typename T, typename...U> void print(const T&, const U&...);
}

auto
prn::operator "" _s(const char* s, const size_t N)
-> string
{
	return string(s, N);
}

using prn::operator "" _s;

void prn::print(void)
{
	cout << endl;
}

template <typename...T>
void print(const T&...t)
{
	prn::print(t...);
	prn::print();
}

template <typename T>
void prn::print(const T &t)
{
	cout << t;
}

template <typename T, typename...U>
void prn::print(const T &t, const U&...u)
{
	print(t);
	cout << ", ";
	print(u...);
}

int main(void)
{
	print(true);
	print(true, 'a');
	print(true, 'a', "abcde"_s);
	print(true, 'a', "abcde"_s, 12345);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull, 1.23f);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull, 1.23f, 1.23456789e123);
	return EXIT_SUCCESS;
}
