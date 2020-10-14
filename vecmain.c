/* vecmain.c*/
// main program

#include "veclib.h"
#include <stdio.h>

void print(vector vec_a) {
	printf("[");
    int  i;
	for ( i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}


vector add(vector vec_a, vector vec_b){
	veclib vec_c;
	int i;
	for( i=0;i<DIM;i++)
		vec_c[i]=vec_a[i]+vec_b[i];
	return vec_c;
}


int main() {
	vector vecA, vecB, vecC;
	// read vectors vecA, vecB as input

	vecC= add(vecA,vecB);
	printf("Printing vector sum\n");
	print(vecC);
	
	// print and display other outputs
	// product, difference, dot product, angle

} // end main