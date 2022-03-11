#include "token.hpp"

#include <utility>

int main(void)
{
	using pers = std::pair<std::string, int>;
	std::pair<pers, pers> sum
	{
		{"first", 0},
		{"second", 0}
	};
	token::csizet MAX(20);
	auto v(token::initialize(MAX));

	for(auto first(true); !v.empty(); first = !first)
	{
		std::cout << v << std::endl;
		const auto d(token::decision_get(v));
		std::cout << d << std::endl;
		const auto s(token::decision_sum(d, v));

		if(first)
		{
			std::cout << sum.first.first << ": " << s << std::endl;
			sum.first.second += s;
			std::cout << sum.first.first << " sum: " << sum.first.second << std::endl;
		}
		else
		{
			std::cout << sum.second.first << ": " << s << std::endl;
			sum.second.second += s;
			std::cout << sum.second.first << " sum: " << sum.second.second << std::endl;
		}
		token::decision_step(d, v);
	}

	const auto win(std::max(sum.first.second, sum.second.second));
	std::cout << (win == sum.first.second ? sum.first.first : sum.second.first) << " win: " << win << std::endl;
	return EXIT_SUCCESS;
}
