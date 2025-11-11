#pragma once

#include <chrono>
#include <string>

namespace gen
{
	const std::size_t MAXSIZE(4u);

	std::string GetWord(const unsigned&);
	std::string GetTime(const std::chrono::time_point<std::chrono::system_clock>&);
}
