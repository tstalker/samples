#include <list>
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::pair;
using std::string;
using std::vector;

void PrintEntry(const pair <string, int> &e)
{
	cout << e.first << ' ' << e.second << endl;
}

int main(void)
{
	list <pair <string, int>> PhoneBookList
	{
		{ "Ivan", 11111 },
		{ "Petr", 22222 },
		{ "Vasily", 33333 },
		{ "Dmitry", 44444 },
		{ "Alexey", 55555 }
	};

	cout << "Source PhoneBookList:" << endl;
	for_each(PhoneBookList.cbegin(), PhoneBookList.cend(), PrintEntry);

	vector <pair <string, int>> PhoneBookVector;
	copy(PhoneBookList.cbegin(), PhoneBookList.cend(),
		back_inserter(PhoneBookVector));
	sort(PhoneBookVector.begin(), PhoneBookVector.end());
	cout << endl << "Sorted PhoneBookVector:" << endl;
	for_each(PhoneBookVector.cbegin(), PhoneBookVector.cend(), PrintEntry);

	PhoneBookList.clear();
	copy(PhoneBookVector.cbegin(), PhoneBookVector.cend(),
		back_inserter(PhoneBookList));
	cout << endl << "Sorted PhoneBookList:" << endl;
	for_each(PhoneBookList.cbegin(), PhoneBookList.cend(), PrintEntry);
	return int();
}
