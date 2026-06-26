#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"
#include "utils.h"

#include <stdlib.h>

int main(void)
{
	cpshape shapes[] =
	{
		(cpshape)& (circle)
	{
		name_circle,
			area_circle,
			perimeter_circle,
			"circle",
		{1.5}
	},
		(cpshape)& (square)
	{
		name_square,
			area_square,
			perimeter_square,
			"square",
		{3.}
	},
		(cpshape)& (rectangle)
	{
		name_rectangle,
			area_rectangle,
			perimeter_rectangle,
			"rectangle",
		{3., 4.}
	},
		(cpshape)& (triangle)
	{
		name_triangle,
			area_triangle,
			perimeter_triangle,
			"triangle",
		{3., 4., 5.}
	}
	};
	const size_t size = sizeof shapes / sizeof * shapes;
	for(size_t i = 0; i < size; i++)
	{
		print(shapes[i]);
	}
	return EXIT_SUCCESS;
}
