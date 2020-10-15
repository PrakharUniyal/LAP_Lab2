/* veclib.h */

#ifndef veclib
#define veclib

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define DIM 4
// vector type
typedef float vector[4];

// functions


// print vector
void print(vector vec_a);


// vector addition
float* add(vector vec_a, vector vec_b);


// elementwise product
float* eleProd(vector vec_a, vector vec_b);


// difference of two vectors
float* vectordiff(vector vec_a, vector vec_b);


// dot product
float vectordotprod(vector vec_a, vector vec_b);
// add other functions as needed

#endif
