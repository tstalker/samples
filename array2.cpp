#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;

using cint = const int;
using cszt = const size_t;

const auto WIDTH(2u);
const auto NULLCHAR('0');
const auto MAX1(10u);

cint Data[][MAX1]
{
	{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 },
	{ 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 },
	{ 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 },
	{ 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 }
};

const auto MAX0(sizeof Data / sizeof Data[0]);

void Print(cint d)
{
	cout << setw(WIDTH) << setfill(NULLCHAR) << d << ' ';
}

void Print(void)
{
	cout << "Print(): " << endl;
	for(auto i = size_t(); i < MAX0; i++)
	{
		for(auto j = size_t(); j < MAX1; j++)
			Print(Data[i][j]);
		cout << endl;
	}
}

void Print(cint v[MAX0][MAX1])
{
	cout << "Print(const int[][MAX1]): " << endl;
	for(auto i = size_t(); i < MAX0; i++)
	{
		for(auto j = size_t(); j < MAX1; j++)
			Print(v[i][j]);
		cout << endl;
	}
}

void Print(cint v[][MAX1], cszt max0)
{
	cout << "Print(const int[][MAX1], const size_t): " << endl;
	for(auto i = size_t(); i < max0; i++)
	{
		for(auto j = size_t(); j < MAX1; j++)
			Print(v[i][j]);
		cout << endl;
	}
}

void Print(cint v[], cszt max0, cszt max1)
{
	cout << "Print(const int[], const size_t, const size_t): " << endl;
	for(auto i = size_t(); i < max0; i++)
	{
		for(auto j = size_t(); j < max1; j++)
			Print(v[i * max1 + j]);
		cout << endl;
	}
}

int main(void)
{
	Print();
	cout << endl;
	Print(Data);
	cout << endl;
	Print(Data, MAX0);
	cout << endl;
	Print(*Data, MAX0, MAX1);
	return int();
}
