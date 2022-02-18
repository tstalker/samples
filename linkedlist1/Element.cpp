#include "Element.hpp"

Element::Element(const int Data, Element* Next, Element* Prev): Data(Data), Next(Next), Prev(Prev)
{
	std::cout << "Element::Element(const int " << Data << ", Element*, Element* <";
	if(Next)
		std::cout << Next->Data;
	else std::cout << "nullptr";
	std::cout << ">)" << std::endl;
}
