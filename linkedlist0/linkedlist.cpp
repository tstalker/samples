#include "linkedlist.hpp"

#include <cstdlib>

LinkedList::LinkedList(const LinkedList& x)
{
	std::cout << "LinkedList::LinkedList(const LinkedList&)" << std::endl;
	for(auto p(x.Base); p; p = p->Next)
		AddLast(p->Data);
}

LinkedList::~LinkedList(void)
{
	std::cout << "LinkedList::~LinkedList()" << std::endl;
	Clear();
}

void LinkedList::AddFirst(const int Data)
{
	std::cout << "LinkedList::AddFirst(const int " << Data << ')' << std::endl;
	Base = new Element(Data, Base);
}

void LinkedList::AddLast(const int Data)
{
	std::cout << "LinkedList::AddLast(const int " << Data << ')' << std::endl;
	if(Base)
		Last()->Next = new Element(Data);
	else AddFirst(Data);
}

Element* LinkedList::Last(void)
{
	if(!Base)
		return nullptr;
	auto p(Base);
	while(p->Next)
		p = p->Next;
	return p;
}

void LinkedList::Print(void) const
{
	for(auto p(Base); p; p = p->Next)
		p->Print();
	std::cout << std::endl;
}

size_t LinkedList::Count(void) const
{
	size_t n{};
	for(auto p(Base); p; p = p->Next)
		n++;
	return n;
}

void LinkedList::Clear(void)
{
	std::cout << "LinkedList::Clear()" << std::endl;
	while(Base)
		RemoveFirst();
}

void LinkedList::Remove(const size_t n)
{
	std::cout << "LinkedList::Remove(const size_t " << n << ')' << std::endl;
	size_t i{};
	auto p(Base), q(Base);
	while(i < n && q && p->Next)
	{
		i++;
		q = p;
		p = p->Next;
	}
	if(!Base || i != n)
	{
		std::cerr << "Error: index " << n << " out of range" << std::endl;
		exit(EXIT_FAILURE);
	}
	if(p == Base)
		RemoveFirst();
	else
	{
		q->Next = p->Next;
		delete p;
	}
}

void LinkedList::RemoveFirst(void)
{
	std::cout << "LinkedList::RemoveFirst()" << std::endl;
	if(!Base)
	{
		std::cerr << "Error: List already empty" << std::endl;
		exit(EXIT_FAILURE);
	}
	auto p(Base->Next);
	delete Base;
	Base = p;
}
