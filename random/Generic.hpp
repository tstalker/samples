#ifdef GENERIC_HPP
#error Redefined header Generic.hpp
#endif

#define GENERIC_HPP

#include <chrono>
#include <string>

namespace Generic
{
	using namespace std;

	const size_t MAXSIZE(5u);

	string GetWord(const unsigned);
	string GetTime(const chrono::time_point <chrono::system_clock> &);
}
