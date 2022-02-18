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
const auto TABCHAR('\t');
const auto MAX1(5u);
const auto MAX2(6u);

cint Data[][MAX1][MAX2]
{
	{
		{ 0, 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10, 11 },
		{ 12, 13, 14, 15, 16, 17 },
		{ 18, 19, 20, 21, 22, 23 },
		{ 24, 25, 26, 27, 28, 29 }
	},
	{
		{ 30, 31, 32, 33, 34, 35 },
		{ 36, 37, 38, 39, 40, 41 },
		{ 42, 43, 44, 45, 46, 47 },
		{ 48, 49, 50, 51, 52, 53 },
		{ 54, 55, 56, 57, 58, 59 }
	},
	{
		{ 60, 61, 62, 63, 64, 65 },
		{ 66, 67, 68, 69, 70, 71 },
		{ 72, 73, 74, 75, 76, 77 },
		{ 78, 79, 80, 81, 82, 83 },
		{ 84, 85, 86, 87, 88, 89 }
	}
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
		for(auto j = size_t(); j < MAX1; j++)
		{
			for(auto k = size_t(); k < i; k++)
				cout.put(TABCHAR);
			for(auto k = size_t(); k < MAX2; k++)
				Print(Data[i][j][k]);
			cout << endl;
		}
}

void Print(cint v[MAX0][MAX1][MAX2])
{
	cout << "Print(const int[][MAX1][MAX2]): " << endl;
	for(auto i = size_t(); i < MAX0; i++)
		for(auto j = size_t(); j < MAX1; j++)
		{
			for(auto k = size_t(); k < i; k++)
				cout.put(TABCHAR);
			for(auto k = size_t(); k < MAX2; k++)
				Print(v[i][j][k]);
			cout << endl;
		}
}

void Print(cint v[][MAX1][MAX2], cszt max0)
{
	cout << "Print(const int[][MAX1][MAX2], const size_t): " << endl;
	for(auto i = size_t(); i < max0; i++)
		for(auto j = size_t(); j < MAX1; j++)
		{
			for(auto k = size_t(); k < i; k++)
				cout.put(TABCHAR);
			for(auto k = size_t(); k < MAX2; k++)
				Print(v[i][j][k]);
			cout << endl;
		}
}

void Print(cint v[][MAX2], cszt max0, cszt max1)
{
	cout << "Print(const int[][MAX2], const size_t, const size_t): "
		<< endl;
	for(auto i = size_t(); i < max0; i++)
		for(auto j = size_t(); j < max1; j++)
		{
			for(auto k = size_t(); k < i; k++)
				cout.put(TABCHAR);
			for(auto k = size_t(); k < MAX2; k++)
				Print(v[i * max1 + j][k]);
			cout << endl;
		}
}

void Print(cint v[], cszt max0, cszt max1, cszt max2)
{
	cout << "Print(const int[], const size_t, const size_t, const size_t): "
		<< endl;
	for(auto i = size_t(); i < max0; i++)
		for(auto j = size_t(); j < max1; j++)
		{
			for(auto k = size_t(); k < i; k++)
				cout.put(TABCHAR);
			for(auto k = size_t(); k < max2; k++)
				Print(v[(i * max1 + j) * max2 + k]);
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
	cout << endl;
	Print(**Data, MAX0, MAX1, MAX2);
	return int();
}
