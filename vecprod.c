#include "veclib.h"
vector vec_c;

//Function for element-wise product of two vectors
float* eleProd(vector vec_a, vector vec_b){
	
	int i;
	for( i=0;i<DIM;i++)
	vec_c[i]=vec_a[i]*vec_b[i];
	return vec_c;
}
