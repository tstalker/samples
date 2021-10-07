#include <iostream>

enum Rainbow { RED, ORANGE, YELLOW, GREEN, LIGHTBLUE, BLUE, VIOLET, BLACK };

int main(void)
{
	for(Rainbow x(RED); x < BLACK; x = static_cast <Rainbow> (x + 1))
		switch(x)
		{
		default:
			std::cerr << "Error: " << x << std::endl;
			break;
		case RED:
			std::cout << "Red" << std::endl;
			break;
		case ORANGE:
			std::cout << "Orange" << std::endl;
			break;
		case YELLOW:
			std::cout << "Yellow" << std::endl;
			break;
		case GREEN:
			std::cout << "Green" << std::endl;
			break;
		case LIGHTBLUE:
			std::cout << "LightBlue" << std::endl;
			break;
		case BLUE:
			std::cout << "Blue" << std::endl;
			break;
		case VIOLET:
			std::cout << "Violet" << std::endl;
		}
}
