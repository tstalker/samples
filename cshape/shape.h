#pragma once

#include "types.h"

typedef struct
{
	PFC name;
	PFD area;
	PFD perimeter;
}
shape;

typedef const shape* cpshape;
