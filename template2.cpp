#include <string>
#include <iostream>

namespace prn
{
	template <typename T> void print(const T&);
	template <typename T, typename...U> void print(const T&, const U&...);
}

void print(void);
template <typename...T> void print(const T&...);

using namespace std;

string operator "" _s(const char *s, const size_t N)
{
	return string(s, N);
}

int main(void)
{
	print();
	print(true);
	print(true, 'a');
	print(true, 'a', "abcde"_s);
	print(true, 'a', "abcde"_s, 12345);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull, 1.23f);
	print(true, 'a', "abcde"_s, 12345, 12345678901234567890ull, 1.23f, 9.87654e123);
}

void print(void)
{
	cout << endl;
}

template <typename...T> void print(const T&...t)
{
	prn::print(t...);
	print();
}

template <typename T> void prn::print(const T &t)
{
	cout << t;
}

template <typename T, typename...U> void prn::print(const T &t, const U&...u)
{
	print(t);
	cout << ", ";
	print(u...);
}
