#pragma once

#include "decision.hpp"

#include <vector>
#include <iostream>
#include <string_view>

namespace token
{
	using ivector = std::vector<int>;
	using dvector = std::vector<decision>;

	void outerror(const char*);
	ivector initialize(const size_t);
	std::string_view decision_str(const decision);
	decision decision_get(const ivector&);
	decision decision_get(const dvector&, const ivector&);
	void decision_step(const decision, ivector&);
	int decision_sum(const decision, const ivector&);
	std::ostream& operator << (std::ostream&, const decision);
	std::ostream& operator << (std::ostream&, const ivector&);
}

using token::operator <<;
