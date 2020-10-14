
#include "veclib.h"


//Function to add two vectors
vector add(vector vec_a, vector vec_b){
	vector vec_c;
	int i;
	for( i=0;i<DIM;i++)
		vec_c[i]=vec_a[i]+vec_b[i];
	return vec_c;
}