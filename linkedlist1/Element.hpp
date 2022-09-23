#pragma once

#include <iostream>

namespace gen
{
	class Element;
}

class gen::Element
{
public:
	Element(const Element&) = delete;
	Element(const int, Element* = nullptr, Element* = nullptr);

	~Element(void)
	{
		std::cout << "Element::~Element(): " << Data << std::endl;
	}

	void Print(void) const
	{
		std::cout << Data <<  ' ';
	}

private:
	int Data{};
	Element* Next{nullptr};
	Element* Prev{nullptr};

	friend class LinkedList;
};
