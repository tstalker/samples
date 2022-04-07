#include <memory>
#include <iostream>
#include <functional>

template <typename T>
std::function <void(T*)>
custom_deleter_functor(void)
{
	return [](T *x)
	{
		std::cout << "delete " << *x << std::endl;
		delete x;
	};
}

int main(void)
{
	std::unique_ptr<int, std::function<void(int*)>>
		int_ptr(new int(123456789), custom_deleter_functor<int>());
	std::cout << *int_ptr << std::endl;
	return EXIT_SUCCESS;
}
