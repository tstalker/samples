#pragma once

#include <iostream>

class Element
{
public:
	Element(const Element&) = delete;
	Element(Element&&) = delete;
	Element(const int, Element* = nullptr);

	~Element(void)
	{
		std::cout << "Element::~Element(): " << Data << std::endl;
	}

	void Print(void) const
	{
		std::cout << Data <<  ' ';
	}

private:
	int Data;
	Element* Next;

	friend class LinkedList;
};
