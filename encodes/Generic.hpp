#pragma once

#include <chrono>
#include <string>

namespace gen
{
	using namespace std;

	const size_t MAXSIZE(4u);

	string GetWord(const unsigned&);
	string GetTime(const chrono::time_point<chrono::system_clock>&);
}
