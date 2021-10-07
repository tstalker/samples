#ifdef TYPES_H
#error Redefined header types.h
#endif

#define TYPES_H

#include <stddef.h>

typedef void *pvoid;
typedef const void *cpvoid;

typedef const char cchar;
typedef char *pchar;
typedef cchar *cpchar;

typedef const int cint;
typedef int *pint;
typedef cint *cpint;

typedef unsigned uint;
typedef const uint cuint;
typedef uint *puint;
typedef cuint *cpuint;

typedef const size_t csizet;
