#ifdef LINKEDLIST_HPP
#error Redefined header LinkedList.hpp
#endif

#define LINKEDLIST_HPP

#ifndef ELEMENT_HPP
#include "Element.hpp"
#endif

class LinkedList
{
public:
	LinkedList(void)
	{
		std::cout << "LinkedList::LinkedList()" << std::endl;
	}

	LinkedList(const LinkedList&);
	~LinkedList(void);
	void AddFirst(const int);
	void AddLast(const int);
	void Print(void) const;
	size_t Count(void) const;
	void Clear(void);
	void Remove(const size_t);
	void RemoveFirst(void);

private:
	Element *First{nullptr}, *Last{nullptr};
};
