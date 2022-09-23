//#define DEBUG

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

int
main(void)
{
	const auto MAX(10u);
	job::Work(job::v<ier::Base<ini::TypeBase>>, MAX, "Base");
	job::Work(job::v<std::unique_ptr<ier::Base<ini::TypeBase>>>, MAX, "unique_ptr<Base>");
	return EXIT_SUCCESS;
}

template <typename T>
std::optional<bool>
ier::Base<T>::FlagSpace;
