/* veclib.h */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>


#ifndef veclib.h
#define veclib.h

#define DIM 4
// vector type
typedef vector float[DIM];

// functions


// print vector
void print(vector vec_a);


// vector addition
vector add(vector vec_a, vector vec_b);


// elementwise product
vector eleProd(vector vec_a, vector vec_b);


// difference of two vectors
vector vector diff(vector vec_a, vector vec_b);


// dot product
float vector dotprod(vector vec_a, vector vec_b);
// add other functions as needed

#endif