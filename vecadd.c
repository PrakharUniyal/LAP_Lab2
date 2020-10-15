
#include "veclib.h"

vector vec_c;
//Function to add two vectors
float* add(vector vec_a, vector vec_b){
	
	int i;
	for( i=0;i<DIM;i++)
		vec_c[i]=vec_a[i]+vec_b[i];
	return vec_c;
}
