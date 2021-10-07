#include "LinkedList.hpp"

#include <cstdlib>

LinkedList::LinkedList(const LinkedList& x)
{
	std::cout << "LinkedList::LinkedList(const LinkedList&)" << std::endl;
	for(auto p(x.First); p; p = p->Next)
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
	auto p(new Element(Data, First));
	if(First)
		First->Prev = p;
	First = p;
	if(!Last)
		Last = p;
}

void LinkedList::AddLast(const int Data)
{
	std::cout << "LinkedList::AddLast(const int " << Data << ')' << std::endl;
	auto p(new Element(Data, nullptr, Last));
	if(Last)
		Last->Next = p;
	Last = p;
	if(!First)
		First = p;
}

void LinkedList::Print(void) const
{
	for(auto p(First); p; p = p->Next)
		p->Print();
	std::cout << std::endl;
}

size_t LinkedList::Count(void) const
{
	size_t n{};
	for(auto p(First); p; p = p->Next)
		n++;
	return n;
}

void LinkedList::Clear(void)
{
	std::cout << "LinkedList::Clear()" << std::endl;
	while(First)
		RemoveFirst();
}

void LinkedList::Remove(const size_t n)
{
	std::cout << "LinkedList::Remove(const size_t " << n << ')' << std::endl;
	size_t i{};
	auto p(First);
	while(i < n && p && p->Next)
	{
		i++;
		p = p->Next;
	}
	if(!First || i != n)
	{
		std::cerr << "Error: index " << n << " out of range" << std::endl;
		exit(EXIT_FAILURE);
	}
	if(p == First)
		RemoveFirst();
	else if(p == Last)
	{
		auto q(p->Prev);
		q->Next = p->Next;
		p->Prev = q;
		delete p;
	}
}

void LinkedList::RemoveFirst(void)
{
	std::cout << "LinkedList::RemoveFirst()" << std::endl;
	if(!First)
	{
		std::cerr << "Error: List already empty" << std::endl;
		exit(EXIT_FAILURE);
	}
	auto p(First->Next);
	if(p)
		p->Prev = nullptr;
	delete First;
	First = p;
}

void LinkedList::RemoveLast(void)
{
	std::cout << "LinkedList::RemoveLast()" << std::endl;
	if(!First)
	{
		std::cerr << "Error: List already empty" << std::endl;
		exit(EXIT_FAILURE);
	}
	auto p(First->Next);
	if(p)
		p->Prev = nullptr;
	delete First;
	First = p;
}
