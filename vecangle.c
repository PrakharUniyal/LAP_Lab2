
#include "veclib.h"

//Function to add two vectors
float vectorangle(vector vec_a, vector vec_b)
{
    float theta;
    vector vector_zero = {0.0,0.0,0.0,0.0};
    
    float dotprod = vectordotprod(vec_a,vec_b);
    
    float norm_a = vectornorm(vec_a,vector_zero);
    float norm_b = vectornorm(vec_b, vector_zero);
    
    theta = acos(dotprod/(norm_a*norm_b));
    return theta;
}
