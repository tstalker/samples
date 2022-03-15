#include <iostream>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

using cint = const int;
using cstring = const string;
using crstring = cstring&;

class List;
using CList = const List;
using CPList = CList*;
using CRList = CList&;

class List
{
	class Entry;
	using CEntry = const Entry;
	using CREntry = CEntry&;

	class Entry
	{
		cstring Name;
		cint Number{ cint() };

	public:
		Entry(crstring Name, cint Number): Name(Name), Number(Number)
		{}

		Entry(CREntry s): Entry(s.Name, s.Number)
		{}

		~Entry(void)
		{}

		void Print(void) const
		{
			cout << Name << ' ' << Number << endl;
		}

		crstring GetName(void) const
		{
			return Name;
		}

		int GetNumber(void) const
		{
			return Number;
		}
	};

	CEntry Data;
	mutable CPList Next{ nullptr };
	static CPList Base;

public:
	List(crstring Name, cint Number): Data(Name, Number)
	{}

	List(CREntry s): List(s.GetName(), s.GetNumber())
	{}

	List(CRList s): List(s.Data)
	{}

	~List(void)
	{}

	void Error(crstring f, crstring s) const
	{
		cerr << "List::" << f << "() error: " << s << endl;
	}

	void Print(void) const;
	void PrintList(void) const;
	void Add(CPList) const;
	void DelLast(void) const;
	void DelList(void) const;
	size_t Count(void) const;
	CPList GetNext(void) const;
	CPList GetLast(void) const;

	static CPList GetFirst(void)
	{
		return Base;
	}
};

CPList List::Base(nullptr);

CPList List::GetNext(void) const
{
	if(Base == nullptr)
	{
		Error("GetNext", "Base is already nullptr");
		return nullptr;
	}

	if(this == nullptr)
	{
		Error("GetNext", "this is already nullptr");
		return nullptr;
	}

	return Next;
}

CPList List::GetLast(void) const
{
	auto p(Base);
	for(auto q(Base); q != nullptr; q = q->Next)
		p = q;

	return p;
}

void List::PrintList(void) const
{
	cout << "List: " << endl;
	for(auto p(Base); p != nullptr; p = p->Next)
		p->Print();
}

void List::Add(CPList s) const
{
	if(Base == nullptr) Base = s;
	else GetLast()->Next = s;
}

void List::DelLast(void) const
{
	if(Base == nullptr)
	{
		Error("DelLast", "Base is already nullptr");
		return;
	}

	if(Base->Next == nullptr)
	{
		delete Base;
		Base = nullptr;
		return;
	}

	auto p(Base);
	for(auto q(Base); q->Next != nullptr; q = q->Next)
		p = q;

	delete p->Next;
	p->Next = nullptr;
}

void List::DelList(void) const
{
	if(Base == nullptr)
	{
		Error("DelList", "Base is already nullptr");
		return;
	}

	while(Base != nullptr)
		DelLast();
}

size_t List::Count(void) const
{
	auto n = size_t();

	for(auto p(Base); p != nullptr; p = p->Next)
		n++;

	return n;
}

void List::Print(void) const
{
	if(this == nullptr) Error("Print", "this is already nullptr");
	else Data.Print();
}

CPList GetFirst(void)
{
	return List::GetFirst();
}

int main(void)
{
	GetFirst()->Add(new List("Ivan", 11111));
	GetFirst()->Add(new List("Petr", 22222));
	GetFirst()->Add(new List("Vasily", 33333));
	GetFirst()->Add(new List("Dmitry", 44444));
	GetFirst()->Add(new List("Alexey", 55555));

	while(GetFirst() != nullptr)
	{
		cout << endl;
		GetFirst()->PrintList();
		cout << "List count: " << GetFirst()->Count() << endl << endl << "First: ";
		GetFirst()->Print();
		cout << "Last: ";
		GetFirst()->GetLast()->Print();

		for(auto p(GetFirst()); p != nullptr; p = p->GetNext())
		{
			cout << "Next: ";
			p->Print();
		}
		GetFirst()->DelLast();
	}

	return int();
}
