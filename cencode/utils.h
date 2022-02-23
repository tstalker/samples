#pragma once

#include <stddef.h>

#define MAXSIZE 100

extern const size_t TOKENSIZE;

size_t min(const size_t, const size_t);
unsigned find(const char*);
const char* getword(const unsigned, char*, const size_t);
