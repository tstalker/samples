#ifdef VECTOR_H
#error Redefined header vector.h
#endif

#define VECTOR_H

#ifndef TYPES_H
#include "types.h"
#endif

#include <stdbool.h>

#define VECTOR(TYPE) \
struct svector ## _ ## TYPE; \
typedef struct svector ## _ ## TYPE vector ## _ ## TYPE; \
typedef const vector ## _ ## TYPE cvector ## _ ## TYPE; \
typedef vector ## _ ## TYPE *pvector ## _ ## TYPE; \
typedef cvector ## _ ## TYPE *cpvector ## _ ## TYPE; \
\
typedef TYPE vector_t ## _ ## TYPE; \
typedef const vector_t ## _ ## TYPE vector_ct ## _ ## TYPE; \
typedef vector_t ## _ ## TYPE *vector_pt ## _ ## TYPE; \
typedef vector_ct ## _ ## TYPE *vector_cpt ## _ ## TYPE; \
\
typedef void(*vector_vd_pf_pv ## _ ## TYPE)(pvector ## _ ## TYPE); \
typedef void(*vector_vd_pf_cpv ## _ ## TYPE)(cpvector ## _ ## TYPE); \
\
typedef void(*vector_vd_pf_pv_pv ## _ ## TYPE)(pvector ## _ ## TYPE, pvector ## _ ## TYPE); \
typedef void(*vector_vd_pf_pv_cpv ## _ ## TYPE)(pvector ## _ ## TYPE, cpvector ## _ ## TYPE); \
\
typedef void(*vector_vd_pf_pv_pt_sz ## _ ## TYPE)(pvector ## _ ## TYPE, vector_pt ## _ ## TYPE, csizet); \
typedef void(*vector_vd_pf_pv_cpt_sz ## _ ## TYPE)(pvector ## _ ## TYPE, vector_cpt ## _ ## TYPE, csizet); \
\
typedef vector_t ## _ ## TYPE(*vector_t_pf_pv ## _ ## TYPE)(pvector ## _ ## TYPE); \
typedef vector_t ## _ ## TYPE(*vector_t_pf_cpv ## _ ## TYPE)(cpvector ## _ ## TYPE); \
typedef vector_t ## _ ## TYPE(*vector_t_pf_cpv_sz ## _ ## TYPE)(cpvector ## _ ## TYPE, csizet); \
\
typedef vector_pt ## _ ## TYPE(*vector_pt_pf_pv ## _ ## TYPE)(pvector ## _ ## TYPE); \
typedef vector_cpt ## _ ## TYPE(*vector_cpt_pf_cpv ## _ ## TYPE)(cpvector ## _ ## TYPE); \
\
typedef void(*vector_vd_pf_cpv_sz ## _ ## TYPE)(cpvector ## _ ## TYPE, csizet); \
typedef void(*vector_vd_pf_pv_sz_ct ## _ ## TYPE)(pvector ## _ ## TYPE, csizet, vector_ct ## _ ## TYPE); \
typedef void(*vector_vd_pf_cpt ## _ ## TYPE)(vector_cpt ## _ ## TYPE); \
\
typedef bool(*vector_bl_pf_cpv ## _ ## TYPE)(cpvector ## _ ## TYPE); \
typedef size_t(*vector_sz_pf_cpv ## _ ## TYPE)(cpvector ## _ ## TYPE); \
typedef int(*vector_i_pf_cpvd_cpvd ## _ ## TYPE)(cpvoid, cpvoid); \
\
struct svector ## _ ## TYPE \
{ \
	vector_sz_pf_cpv ## _ ## TYPE size; \
	vector_pt_pf_pv ## _ ## TYPE begin, end; \
	vector_cpt_pf_cpv ## _ ## TYPE cbegin, cend; \
	vector_bl_pf_cpv ## _ ## TYPE empty; \
	vector_t_pf_cpv ## _ ## TYPE front, back; \
	vector_t_pf_pv ## _ ## TYPE pop_front, pop_back; \
	vector_vd_pf_pv ## _ ## TYPE check_read_only, dec_size, inc_ptr, initialize, sort; \
	vector_vd_pf_cpv ## _ ## TYPE check_empty, print; \
	vector_vd_pf_cpv_sz ## _ ## TYPE check_out_range; \
	vector_i_pf_cpvd_cpvd ## _ ## TYPE cmp; \
	vector_vd_pf_cpt ## _ ## TYPE print_elem; \
\
	vector_vd_pf_pv_pt_sz ## _ ## TYPE init; \
	vector_vd_pf_pv_cpt_sz ## _ ## TYPE cinit; \
	vector_vd_pf_pv_pv ## _ ## TYPE initv; \
	vector_vd_pf_pv_cpv ## _ ## TYPE cinitv; \
	vector_t_pf_cpv_sz ## _ ## TYPE get; \
	vector_vd_pf_pv_sz_ct ## _ ## TYPE set; \
\
	size_t _size; \
	vector_pt ## _ ## TYPE _pt; \
	vector_cpt ## _ ## TYPE _cpt; \
}; \
\
int vector_cmp ## _ ## TYPE (cpvoid, cpvoid); \
bool vector_empty ## _ ## TYPE (cpvector ## _ ## TYPE); \
size_t vector_size ## _ ## TYPE (cpvector ## _ ## TYPE); \
void vector_dec_size ## _ ## TYPE (pvector ## _ ## TYPE); \
void vector_inc_ptr ## _ ## TYPE (pvector ## _ ## TYPE); \
void vector_sort ## _ ## TYPE (pvector ## _ ## TYPE); \
void vector_initialize ## _ ## TYPE (pvector ## _ ## TYPE); \
void vector_init ## _ ## TYPE (pvector ## _ ## TYPE, vector_pt ## _ ## TYPE, csizet); \
void vector_initv ## _ ## TYPE (pvector ## _ ## TYPE, pvector ## _ ## TYPE); \
void vector_cinit ## _ ## TYPE (pvector ## _ ## TYPE, vector_cpt ## _ ## TYPE, csizet); \
void vector_cinitv ## _ ## TYPE (pvector ## _ ## TYPE, cpvector ## _ ## TYPE); \
void vector_set ## _ ## TYPE (pvector ## _ ## TYPE, csizet, vector_ct ## _ ## TYPE); \
void vector_check_empty ## _ ## TYPE (cpvector ## _ ## TYPE); \
void vector_check_read_only ## _ ## TYPE (pvector ## _ ## TYPE); \
void vector_check_out_range ## _ ## TYPE (cpvector ## _ ## TYPE, csizet); \
vector_pt ## _ ## TYPE vector_begin ## _ ## TYPE (pvector ## _ ## TYPE); \
vector_pt ## _ ## TYPE vector_end ## _ ## TYPE (pvector ## _ ## TYPE); \
vector_cpt ## _ ## TYPE vector_cbegin ## _ ## TYPE (cpvector ## _ ## TYPE); \
vector_cpt ## _ ## TYPE vector_cend ## _ ## TYPE (cpvector ## _ ## TYPE); \
vector_t ## _ ## TYPE vector_front ## _ ## TYPE (cpvector ## _ ## TYPE); \
vector_t ## _ ## TYPE vector_back ## _ ## TYPE (cpvector ## _ ## TYPE); \
vector_t ## _ ## TYPE vector_pop_front ## _ ## TYPE (pvector ## _ ## TYPE); \
vector_t ## _ ## TYPE vector_pop_back ## _ ## TYPE (pvector ## _ ## TYPE); \
vector_t ## _ ## TYPE vector_get ## _ ## TYPE (cpvector ## _ ## TYPE, csizet); \
void vector_print ## _ ## TYPE (cpvector ## _ ## TYPE); \
void vector_print_elem ## _ ## TYPE (vector_cpt ## _ ## TYPE);
