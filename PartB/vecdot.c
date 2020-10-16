#include "veclib.h"
//#include <math.h>
#include <stdio.h>

float dotprod(vector vec_a, vector vec_b){
	float product = 0;  
    // Loop to calculate dot product 
    for (int i = 0; i < DIM; i++){  
        product = product + vec_a[i] * vec_b[i]; 
    }
    return product;
};