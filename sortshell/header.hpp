#pragma once

#include <vector>
#include <string_view>

namespace gen
{
	using namespace std;

	void init(vector<int>&, const size_t);
	void print(const string_view, const vector<int>&);
	void shell(vector<int>&);
}
