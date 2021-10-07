#include <map>
#include <iostream>
#include <algorithm>

using std::map;
using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::vector;

void PrintNumber(int n)
{
	cout << ' ' << n;
}

void PrintEntry(const pair <string, vector <int>> &e)
{
	cout << e.first << ':';
	for_each(e.second.cbegin(), e.second.cend(), PrintNumber);
	cout << endl;
}

int main(void)
{
	const map <string, vector <int>> PhoneBook
	{
		{ "Ivan", { 1, 3, 5, 7, 9 }},
		{ "Petr", { 2, 4, 6, 8, 10 }},
		{ "Vasily", { 3, 6, 9, 12, 15 }},
		{ "Dmitry", { 4, 8, 12, 16, 20 }},
		{ "Alexey", { 5, 10, 15, 20, 25 }}
	};

	for_each(PhoneBook.cbegin(), PhoneBook.cend(), PrintEntry);
	return int();
}
