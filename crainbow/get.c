#include "rainbow.h"

const char*
get(const rainbow r)
{
	const char* ret;
	switch(r)
	{
	case RED:
		ret = "Red";
		break;
	case ORANGE:
		ret = "Orange";
		break;
	case YELLOW:
		ret = "Yellow";
		break;
	case GREEN:
		ret = "Green";
		break;
	case LIGHTBLUE:
		ret = "LightBlue";
		break;
	case BLUE:
		ret = "Blue";
		break;
	case VIOLET:
		ret = "Violet";
		break;
	default:
		ret = "Error";
	}
	return ret;
}
