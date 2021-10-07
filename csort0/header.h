#ifdef HEADER_H
#error Redefined header header.h
#endif

#define HEADER_H
#define RANK 100

#include <stddef.h>
#include <stdbool.h>

typedef int* pint;
typedef const int* cpint;
typedef const void* cpvoid;

int compare0(cpvoid, cpvoid);
int compare1(cpvoid, cpvoid);
void init(pint, const size_t);
void print(cpint, const size_t);
bool find(const int, cpint, const size_t);
