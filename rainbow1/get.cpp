#include "rainbow.hpp"

auto
rain::get(const rainbow& r)
-> string_view
{
	string_view ret;
	switch(r)
	{
	case rain::rainbow::RED:
		ret = "Red";
		break;
	case rain::rainbow::ORANGE:
		ret = "Orange";
		break;
	case rain::rainbow::YELLOW:
		ret = "Yellow";
		break;
	case rain::rainbow::GREEN:
		ret = "Green";
		break;
	case rain::rainbow::LIGHTBLUE:
		ret = "LightBlue";
		break;
	case rain::rainbow::BLUE:
		ret = "Blue";
		break;
	case rain::rainbow::VIOLET:
		ret = "Violet";
		break;
	default:
		ret = "Error";
	}
	return ret;
}
