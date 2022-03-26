#pragma once

#include <string_view>

namespace rain
{
	using namespace std;

	enum rainbow
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

	string_view get(const rainbow&);
}
