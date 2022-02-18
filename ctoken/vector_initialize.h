#ifndef VECTOR_H
#include "vector.h"
#endif

#define VECTOR_INITIALIZE(TYPE) \
void vector_initialize ## _ ## TYPE (pvector ## _ ## TYPE this) \
{ \
	this->size = vector_size ## _ ## TYPE; \
	this->dec_size = vector_dec_size ## _ ## TYPE; \
	this->begin = vector_begin ## _ ## TYPE; \
	this->end = vector_end ## _ ## TYPE; \
	this->cbegin = vector_cbegin ## _ ## TYPE; \
	this->cend = vector_cend ## _ ## TYPE; \
	this->front = vector_front ## _ ## TYPE; \
	this->back = vector_back ## _ ## TYPE; \
	this->pop_front = vector_pop_front ## _ ## TYPE; \
	this->pop_back = vector_pop_back ## _ ## TYPE; \
	this->empty = vector_empty ## _ ## TYPE; \
	this->check_empty = vector_check_empty ## _ ## TYPE; \
	this->check_read_only = vector_check_read_only ## _ ## TYPE; \
	this->check_out_range = vector_check_out_range ## _ ## TYPE; \
	this->inc_ptr = vector_inc_ptr ## _ ## TYPE; \
	this->cmp = vector_cmp ## _ ## TYPE; \
	this->sort = vector_sort ## _ ## TYPE; \
	this->get = vector_get ## _ ## TYPE; \
	this->set = vector_set ## _ ## TYPE; \
	this->print = vector_print ## _ ## TYPE; \
	this->print_elem = vector_print_elem ## _ ## TYPE; \
}
