#ifdef TPRINT_H
#error Redefined header tprint.h
#endif

#define TPRINT_H

#ifndef TTYPES_H
#include "ttypes.h"
#endif

void print_one(cint, cszt);
void print_row(cint[], cszt, cszt);
