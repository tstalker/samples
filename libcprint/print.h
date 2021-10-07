#ifdef PRINT_H
#error Redefined header print.h
#endif

#define PRINT_H

#ifndef TYPES_H
#include "types.h"
#endif

#define DIM1 4
#define DIM2 5

#define NL '\n'
#define TAB '\t'

void print_one(cint);
void print_row(cint[], cszt);
void print_table0(cint[][DIM1], cszt);
void print_table1(cint[][DIM2], cszt);
void print_table2(cint[], cszt, cszt);
void print_cube0(cint[][DIM1][DIM2], cszt);
void print_cube1(cint[][DIM1][DIM2], cszt);
void print_cube2(cint[], cszt, cszt, cszt);
void print_cube3(cint[], cszt, cszt, cszt);
void print_cube4(cint[], cszt, cszt, cszt);
