/* vecmain.c*/
// main program

#include "veclib.h"
#include <stdio.h>

void print(vector vec_a) {
	printf("[");
    int  i;
	for ( i=0;i<DIM;i++)
		printf("%.2f ",vec_a[i]);
	printf("]");
	printf("\n");
}



int main() {
	vector vecA, vecB,vec_c;
	float* vecC;
	// read vectors vecA, vecB as input
	for(int i=0;i<DIM;i++)
	scanf("%f",&vecA[i]);
	
	for(int i=0;i<DIM;i++)
	scanf("%f",&vecB[i]);
	
	vecC= add(vecA,vecB);
	printf("Printing vector sum\n");
	print(vecC);
	
	vecC= eleProd(vecA,vecB);
	printf("Printing elementwise product of vectors\n");
	print(vecC);
	
	// print and display other outputs
	// product, difference, dot product, angle

} // end main
