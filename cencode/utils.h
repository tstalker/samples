#pragma once

#include <stddef.h>

#define MAXSIZE 100

extern const size_t TOKENSIZE;

size_t min(size_t, size_t);
unsigned find(const char*);
const char* getword(unsigned, char*, size_t);
