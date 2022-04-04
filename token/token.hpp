#pragma once

#include "decision.hpp"

#include <vector>
#include <iostream>
#include <string_view>

namespace token
{
	using namespace std;
	using ivector = vector<int>;
	using dvector = vector<decision>;

	void outerror(const char*);
	ivector initialize(const size_t);
	string_view decision_str(const decision);
	decision decision_get(const ivector&);
	decision decision_get(const dvector&, const ivector&);
	void decision_step(const decision, ivector&);
	int decision_sum(const decision, const ivector&);
	ostream& operator << (ostream&, const decision);
	ostream& operator << (ostream&, const ivector&);
}

using token::operator <<;

