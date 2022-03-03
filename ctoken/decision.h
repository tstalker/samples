#pragma once

typedef enum
{
	END = 1,
	LEFT,
	RIGHT,
	LEFT_LEFT,
	LEFT_RIGHT,
	RIGHT_RIGHT
}
decision;

typedef const decision cdecision;
typedef decision *pdecision;
typedef cdecision *cpdecision;
