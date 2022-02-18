#ifdef TOKEN_HPP
#error Redefined header token.hpp
#endif

#define TOKEN_HPP

#ifndef DECISION_HPP
#include "decision.hpp"
#endif

#include <string>
#include <vector>
#include <iostream>

namespace token
{
	using namespace std;
	using csizet = const size_t;
	using cpchar = const char* const;
	using rostream = ostream&;
	using ivector = vector <int>;
	using civector = const ivector;
	using rivector = ivector&;
	using crivector = civector&;
	using dvector = vector <decision>;
	using cdvector = const dvector;
	using rdvector = dvector&;
	using crdvector = cdvector&;

	void outerror(cpchar);
	ivector initialize(csizet);
	string decision_str(cdecision);
	decision decision_get(crivector);
	decision decision_get(crdvector, crivector);
	void decision_step(cdecision, rivector);
	int decision_sum(cdecision, crivector);
}

inline token::rostream operator << (token::rostream s, token::cdecision d)
{
	return s << token::decision_str(d);
}

token::rostream operator << (token::rostream, token::crivector);
