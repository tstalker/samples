#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

using cint = const int;
using cszt = const size_t;

const auto MAX(11u);
int Data[MAX];

bool Find(cint d)
{
	for(const auto &x: Data)
		if(x == d) return true;
	return false;
}

void Init(cszt Limit)
{
	for(auto &x: Data)
		x = -1;
	srand(time(nullptr));
	for(auto i = size_t(); i < MAX; i++)
	{
		int d;
		do
			d = rand() % Limit;
		while(Find(d) && i < Limit);
		Data[i] = d;
	}
}

void Print(void)
{
	cout << "Print(): " << endl;
	for(const auto &x: Data)
		cout << x << ' ';
	cout << endl;
}

void Print(cint v[MAX])
{
	cout << "Print(const int[]): " << endl;
	for(auto i = size_t(); i < MAX; i++)
		cout << v[i] << ' ';
	cout << endl;
}

void Print(cint v[], cszt max)
{
	cout << "Print(const int[], const size_t): " << endl;
	for(auto i = size_t(); i < max; i++)
		cout << v[i] << ' ';
	cout << endl;
}

int main(void)
{
	Init(10);
	Print();
	cout << endl;
	Print(Data);
	cout << endl;
	Print(Data, MAX);
	return int();
}
