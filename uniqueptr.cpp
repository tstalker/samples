#include <memory>
#include <iostream>
#include <functional>

using namespace std;

template <typename T> function <void(T*)> custom_deleter_functor(void)
{
	return [] (T *x)
	{
		cout << "delete " << *x << endl;
		delete x;
	};
}

int main(void)
{
	unique_ptr <int, function <void(int*)>>
		int_ptr(new int(123456789), custom_deleter_functor <int> ());
	cout << *int_ptr << endl;
}
