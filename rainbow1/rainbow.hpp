#pragma once

#include <string_view>

namespace rain
{
	using namespace std;
	using color = unsigned long long;
	enum class rainbow: color;

	string_view get(const rainbow&);
}

enum class rain::rainbow:
	rain::color
{
	RED = 111,
	ORANGE,
	YELLOW,
	GREEN,
	LIGHTBLUE,
	BLUE,
	VIOLET,
	BLACK // not included to rainbow
};
