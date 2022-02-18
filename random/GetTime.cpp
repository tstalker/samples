#include "Generic.hpp"

auto Generic::GetTime(const chrono::time_point <chrono::system_clock> &Start) -> string
{
	const auto Finish(chrono::system_clock::now());
	auto Duration(Finish - Start);
	const auto Hours(chrono::duration_cast <chrono::hours> (Duration));
	const auto Minutes(chrono::duration_cast <chrono::minutes> (Duration -= Hours));
	const auto Seconds(chrono::duration_cast <chrono::seconds> (Duration -= Minutes));
	string s;
	if(const auto h{Hours.count()})
		s = to_string(h) + " hours ";
	if(const auto m{Minutes.count()})
		s += to_string(m) + " min ";
	return s + to_string(Seconds.count()) + " sec";
}
