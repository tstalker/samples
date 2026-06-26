namespace ini
{
	using TypeBase = float;
	using TypeDerived = unsigned;
}

#include "work.hpp"

namespace job
{
template <typename T>
	std::vector<T> v;
}

int main(void)
{
	try
	{
		const auto MAX(10u);
		job::Work(job::v<ier::Base<ini::TypeBase>>, MAX, "Base");
		job::Work(job::v<std::unique_ptr<ier::Base<ini::TypeBase>>>, MAX, "unique_ptr<Base>");
		return EXIT_SUCCESS;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Error: Memory fail: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Error: Bad cast: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "Error: Unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}

template <typename T> std::optional<bool> ier::Base<T>::FlagSpace;
