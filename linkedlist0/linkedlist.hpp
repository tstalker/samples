#pragma once

#include "element.hpp"

namespace gen
{
	class LinkedList;
}

class gen::LinkedList
{
public:
	LinkedList(void)
	{
		std::cout << "LinkedList::LinkedList()" << std::endl;
	}

	LinkedList(const LinkedList&);
	~LinkedList(void);
	Element* Last(void);
	void AddFirst(const int);
	void AddLast(const int);
	void Print(void) const;
	size_t Count(void) const;
	void Clear(void);
	void Remove(const size_t);
	void RemoveFirst(void);

private:
	Element* Base{nullptr};
};
