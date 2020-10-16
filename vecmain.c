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
void readvec(float* vec_a)
{
for(int i=0;i<DIM;i++)
scanf("%f",&vec_a[i]);
}


int main() {
	vector vecA, vecB;
	float* vecC;
	float theta;
	// read vectors vecA, vecB as input
	/*for(int i=0;i<DIM;i++)
	scanf("%f",&vecA[i]);
	
	for(int i=0;i<DIM;i++)
	scanf("%f",&vecB[i]);*/
	readvec(vecA);
	readvec(vecB);
	
	vecC= add(vecA,vecB);
	printf("Printing vector sum\n");
	print(vecC);
	
	vecC= eleProd(vecA,vecB);
	printf("Printing elementwise product of vectors\n");
	print(vecC);
	
	float norm=vectornorm(vecA,vecB)
	printf("Norm between the two vectors is %f\n",norm);
	
	float dot=vectordotprod(vecA, vecB);
	printf("Dot product of vectors is %f\n",dot);
	
	theta = vectorangle(vecA,vecB);
	printf("Angle between the two vectors is %f radians.\n",theta);



	// print and display other outputs
	// product, difference, dot product, angle

} // end main
