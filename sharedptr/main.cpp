#include "generic.hpp"

#include <string>
#include <vector>
#include <numbers>
#include <functional>

int
main(void)
{
	const std::vector<gen::Base> v
	{
		gen::Inherit<char>('a'),
		gen::Inherit<std::string>("abcde"),
		gen::Inherit<int>(12345),
		gen::Inherit<float>(1.23f),
		gen::Inherit<double>(std::numbers::pi)
	};

	for(std::size_t i{}; i < v.size(); i++)
	{
		v[i].Print();
	}

	std::cout << std::endl;
	for(auto p(v.cbegin()); p != v.cend(); p++)
	{
		p->Print();
	}

	std::cout << std::endl;
	for(const auto& x: v)
	{
		x.Print();
	}

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), gen::Print);

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), std::mem_fn(&gen::Base::Print));

	struct zzz
	{
		void operator () (const gen::Base& v) const
		{
			v.Print();
		}
	};

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), zzz());

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), [](const gen::Base& v)
	{
		v.Print();
	});

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
