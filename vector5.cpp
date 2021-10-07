#include <iostream>
#include <algorithm>
#include <stdexcept>

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::out_of_range;
using std::initializer_list;

template <typename Type> class MyVector: public vector <Type>
{
public:
	using z = vector <Type>;

	MyVector(size_t s): z(s)
	{}

	MyVector(const initializer_list <Type> &s): z(s)
	{}

	~MyVector(void)
	{}

	Type& operator [] (size_t i)
	{
		return z::at(i);
	}

	const Type& operator [] (size_t i) const
	{
		return z::at(i);
	}

	void Sort(void)
	{
		sort(z::begin(), z::end());
	}

	void Print(size_t i) const
	{
		z::at(i).Print();
	}

	void Print(void) const;
};

template <typename Type> void MyVector <Type>::Print(void) const
{
	for(auto i = size_t(); i < z::size(); i++)
		Print(i);
}

class Entry
{
	string Name;
	int Number;

public:
	Entry(const string &Name, int Number): Name(Name), Number(Number)
	{}

	Entry(const Entry &e): Entry(e.Name, e.Number)
	{}

	~Entry(void)
	{}

	bool operator < (const Entry &e) const
	{
		return Name < e.Name;
	}

	void Print(void) const
	{
		cout << Name << ' ' << Number << endl;
	}

	const string& GetName(void) const
	{
		return Name;
	}

	int GetNumber(void) const
	{
		return Number;
	}
};

void Error(const string &s)
{
	cerr << "Error: " << s << endl;
}

int main(void)
{
	try
	{
		MyVector <Entry> PhoneBook
		{
			{ "Ivan", 12345 },
			{ "Petr", 23456 },
			{ "Vasily", 34567 },
			{ "Dmitry", 45678 },
			{ "Alexey", 56789 }
		};

		PhoneBook.push_back({"Paramon", 67890});
		PhoneBook.emplace_back("Akakiy", 78901);
		PhoneBook.Sort();
		PhoneBook.Print();
		cout << PhoneBook[100].GetName() << ' ' << PhoneBook[100].GetNumber()
			<< endl;
		return int();
	}

	catch(out_of_range)
	{
		Error("Out of range");
		return 1;
	}

	catch(...)
	{
		Error("Unknown exception");
		return 2;
	}
}
