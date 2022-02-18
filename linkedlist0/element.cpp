#include "element.hpp"

Element::Element(const int Data, Element* Next): Data(Data), Next(Next)
{
	std::cout << "Element::Element(const int " << Data << ", Element* <";
	if(Next)
		std::cout << Next->Data;
	else std::cout << "nullptr";
	std::cout << ">)" << std::endl;
}
