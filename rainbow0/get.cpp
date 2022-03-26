#include "rainbow.hpp"

auto
rain::get(const rainbow& r)
-> string_view
{
	string_view ret;
	switch(r)
	{
	case rain::RED:
		ret = "Red";
		break;
	case rain::ORANGE:
		ret = "Orange";
		break;
	case rain::YELLOW:
		ret = "Yellow";
		break;
	case rain::GREEN:
		ret = "Green";
		break;
	case rain::LIGHTBLUE:
		ret = "LightBlue";
		break;
	case rain::BLUE:
		ret = "Blue";
		break;
	case rain::VIOLET:
		ret = "Violet";
		break;
	default:
		ret = "Error";
	}
	return ret;
}
