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

int main() {
	vector vecA, vecB, vecC;
	// read vectors vecA, vecB as input

	printf("Printing vector sum\n");
	add(vecA,vecB,&vecC);
	
	// print and display other outputs
	// product, difference, dot product, angle

} // end main