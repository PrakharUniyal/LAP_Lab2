/* Custom Library Imports */
#include "veclib.h"

/* Function for dot product of two vectors. */
float vectordotprod(vector vec_a, vector vec_b) {
	float ans=0;
	for(int i=0;i<DIM;i++) {
		ans+=vec_a[i]*vec_b[i];
	}
	return ans;
}

