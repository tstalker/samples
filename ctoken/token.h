#ifdef TOKEN_H
#error Redefined header token.h
#endif

#define TOKEN_H

#ifndef DECISION_H
#include "decision.h"
#endif

#ifndef ERROR_LIST_H
#include "error_list.h"
#endif

#ifndef VECTOR_INT_H
#include "vector_int.h"
#endif

VECTOR(decision)

cpchar decision_str(cdecision);
void decision_print(cdecision);
cpchar error_message(error_clist);
void error_print(error_clist), token_print(cint), stoken_print(cpchar, cint), ptoken_print(cpint);
int decision_sum(cdecision, cpvector_int);
decision decision_get(cpvector_int);
decision map(cpvector_decision, cpvector_int);
void decision_step(cdecision, pvector_int);
vector_t_int max2(vector_ct_int, vector_ct_int), max3(vector_ct_int, vector_ct_int, vector_ct_int);
void data_initialize(vector_pt_int, csizet);
