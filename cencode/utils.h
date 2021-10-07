#ifdef UTILS_H
#error Redefined header utils.h
#endif

#define UTILS_H

#include <stddef.h>

extern const size_t MAXSIZE;

size_t min(const size_t, const size_t);
unsigned find(const char*);
const char* getword(const unsigned, char*, const size_t);
