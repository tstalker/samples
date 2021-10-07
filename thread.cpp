#include <thread>
#include <iostream>

using namespace std;

thread_local unsigned tlu;

void ft1(void)
{
	cout << "ft1: " << tlu++ << endl;
}

void ft2(void)
{
	cout << "ft2: " << tlu++ << endl;
}

int main(void)
{
	cout << "main: " << tlu++ << endl;
	thread t1(ft1);
	cout << "main: " << tlu++ << endl;
	thread t2(ft2);
	cout << "main: " << tlu++ << endl;
	t1.join();
	cout << "main: " << tlu++ << endl;
	t2.join();
	cout << "main: " << tlu++ << endl;
}
