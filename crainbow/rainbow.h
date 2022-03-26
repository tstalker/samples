#pragma once

typedef enum
{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	LIGHTBLUE,
	BLUE,
	VIOLET,
	BLACK // not included to rainbow
}
rainbow;

const char* get(const rainbow);
