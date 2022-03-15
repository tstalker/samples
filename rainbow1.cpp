#include <iostream>

using Color = unsigned long long;

enum class Rainbow: Color
{
	RED, ORANGE, YELLOW, GREEN, LIGHTBLUE, BLUE, VIOLET, BLACK
};

int main(void)
{
	for(Rainbow x(Rainbow::RED); x < Rainbow::BLACK;
		x = static_cast <Rainbow> (static_cast <Color> (x) + 1))
		switch(x)
		{
		default:
			std::cerr << "Error: " << static_cast <Color> (x) << std::endl;
			break;
		case Rainbow::RED:
			std::cout << "Red" << std::endl;
			break;
		case Rainbow::ORANGE:
			std::cout << "Orange" << std::endl;
			break;
		case Rainbow::YELLOW:
			std::cout << "Yellow" << std::endl;
			break;
		case Rainbow::GREEN:
			std::cout << "Green" << std::endl;
			break;
		case Rainbow::LIGHTBLUE:
			std::cout << "LightBlue" << std::endl;
			break;
		case Rainbow::BLUE:
			std::cout << "Blue" << std::endl;
			break;
		case Rainbow::VIOLET:
			std::cout << "Violet" << std::endl;
		}
}
