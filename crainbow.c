#include <stdio.h>

enum Rainbow { RED, ORANGE, YELLOW, GREEN, LIGHTBLUE, BLUE, VIOLET, BLACK };

int main(void)
{
	for(enum Rainbow x = RED; x <= BLACK; x++)
		switch(x)
		{
		default:
			fprintf(stderr, "Error: %d\n", x);
			break;
		case RED:
			puts("Red");
			break;
		case ORANGE:
			puts("Orange");
			break;
		case YELLOW:
			puts("Yellow");
			break;
		case GREEN:
			puts("Green");
			break;
		case LIGHTBLUE:
			puts("LightBlue");
			break;
		case BLUE:
			puts("Blue");
			break;
		case VIOLET:
			puts("Violet");
		}
	return 0;
}
