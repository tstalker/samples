#include "Generic.hpp"

auto gen::GetTime(const std::chrono::time_point<std::chrono::system_clock>& Start)
-> std::string
{
	const auto Finish(std::chrono::system_clock::now());
	auto Duration(Finish - Start);
	const auto Hours(std::chrono::duration_cast<std::chrono::hours>(Duration));
	const auto Minutes(std::chrono::duration_cast<std::chrono::minutes>(Duration -= Hours));
	const auto Seconds(std::chrono::duration_cast<std::chrono::seconds>(Duration -= Minutes));
	std::string s;

	if(const auto h{Hours.count()})
	{
		s = std::to_string(h) + " hours ";
	}

	if(const auto m{Minutes.count()})
	{
		s += std::to_string(m) + " min ";
	}

	const auto ret(s + std::to_string(Seconds.count()) + " sec");
	return ret;
}
