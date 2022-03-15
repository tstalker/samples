#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

using cint = const int;
using cszt = const size_t;

/*
const auto MAX(10);

int Data[MAX];
*/

int Data[] { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

const auto MAX(sizeof Data / sizeof Data[0]);

void Print(const string &s)
{
	cout << s << ':';
	for(const auto &x: Data)
		cout << ' ' << x;
	cout << endl;
}

bool Find(cint d)
{
	for(const auto &x: Data)
		if(x == d)
			return true;
	return false;
}

void Init(cint Limit)
{
	for(auto &x: Data)
		x = -1;
	srand(time(NULL));
	for(auto &x: Data)
	{
		register int d;
		do
			d = rand() % Limit;
		while(Find(d));
		x = d;
	}
}

/*
template <typename T> void ShellSort(T *Item, cszt Count)
{
	for(const auto &gap: { 9, 5, 3, 2, 1 })
		for(register auto i(gap); i < Count; i++)
		{
			register const auto x(Item[i]);
			register auto j(i - gap);

			while(j >= 0 && x < Item[j])
			{
				Item[j + gap] = Item[j];
				j -= gap;
			}
			Item[j + gap] = x;
		}
}
*/

template <typename T> void ShellSort(T *Item, cszt Count)
{
	for(const auto &gap: { 9, 5, 3, 2, 1 })
	{
		for(register auto i(gap); i < Count; i++)
		{
			register const auto x(Item[i]);
			cout << " vi[" << i << "]: " << Item[i];
			register auto j(i - gap);

			while(j >= 0 && x < Item[j])
			{
				cout << " vj[" << j << "]: " << Item[j];
				Item[j + gap] = Item[j];
				j -= gap;
			}
			Item[j + gap] = x;
		}
		cout << endl;
	}
}

int main(void)
{
//	Init(10);
	Print("Source");
	ShellSort(Data, MAX);
	Print("Sorted");
	return int();
}
