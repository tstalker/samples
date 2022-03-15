#include <list>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::string;

class Employee
{
	string FirstName, LastName;
	size_t Age;
	string Post, Company;
	bool IsManager;

public:
	Employee(const string &FirstName, const string &LastName, size_t Age,
		const string &Post, const string &Company,
		bool IsManager = false):
		FirstName(FirstName), LastName(LastName), Age(Age),
		Post(Post), Company(Company), IsManager(IsManager)
	{}

	Employee(void) = delete;
	Employee(const Employee&) = default;
	Employee(const Employee&&) = delete;

	~Employee(void)
	{}

	void operator = (const Employee&) = delete;

	void Print(void) const
	{
		cout << FirstName << ' ' << LastName << ' ' << Age << ' ' << Post
			<< ' ' << Company << endl;
	}

	bool Status(void) const
	{
		return IsManager;
	}
};

class Manager: public Employee
{
	size_t ID;
	list <Employee> ListEmployee;

public:
	Manager(const string &FirstName, const string &LastName, size_t Age,
		size_t ID, const string &Post, const string &Company):
		Employee(FirstName, LastName, Age, Post, Company, true), ID(ID)
	{}

	Manager(void) = delete;
	Manager(const Manager&) = delete;
	Manager(const Manager&&) = delete;

	~Manager(void)
	{}

	void operator = (const Manager&) = delete;

	void Add(const Employee &e)
	{
		ListEmployee.push_back(e);
	}

	void Add(const list <Employee> &);
	void Print(void) const;
	void PrintList(void) const;
};

void Print(const list <Employee> &s)
{
	for(const auto &e: s)
		e.Print();
}

void Manager::Add(const list <Employee> &s)
{
	for(const auto &e: s)
		Add(e);
}

void Manager::Print(void) const
{
	cout << "Manager ID " << ID << ": ";
	Employee::Print();
	PrintList();
}

void Manager::PrintList(void) const
{
	cout << "Manager ID " << ID << " employee list:" << endl;
	::Print(ListEmployee);
}

int main(void)
{
	list <Employee> ListEmployee
	{
		{ "Ivan", "Ivanov", 25, "engineer", "Microsoft" },
		{ "Petr", "Petrov", 30, "economist", "Microsoft" },
		{ "Sidor", "Sidorov", 35, "programmer", "Microsoft" }
	};

	cout << "Single employee list:" << endl;
	Print(ListEmployee);
	cout << endl;

	Manager Billy("Bill", "Gates", 55, 0, "president", "Microsoft");
	list <Employee> BillListEmployee
	{
		{ "Filaret", "Filaretov", 37, "technique", "Microsoft" },
		{ "Paramon", "Paramonov", 27, "engineer", "Microsoft" },
		{ "Filimon", "Filimonov", 30, "programmer", "Microsoft" }
	};

	Billy.Add(BillListEmployee);
	Billy.Print();

	list <const Employee*> GeneralListEmployee;
	for(const auto &e: ListEmployee)
		GeneralListEmployee.push_back(&e);
	GeneralListEmployee.push_back(&Billy);

	cout << endl << "General employee list:" << endl;
	for(const auto &e: GeneralListEmployee)
		if(e->Status()) static_cast <const Manager*> (e)->Print();
		else e->Print();
	return int();
}
