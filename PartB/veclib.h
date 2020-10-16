#ifndef VECLIB_H
#define VECLIB_H
#define DIM 4

#include <math.h>
// vector type
typedef float vector[DIM];

// functions
// print vector
void print(vector vec_a);
// input vector
void input(vector vec_a);
// vector addition
void add(vector vec_a, vector vec_b, vector vec_c);
// elementwise product
void eleProd(vector vec_a, vector vec_b, vector vector_c);
// difference of two vectors
void diff(vector vec_a, vector vec_b, vector vector_c);
// dot product
float dotprod(vector vec_a, vector vec_b);
// add other functions as needed
// norm of two vectors
float norm(vector vec_a, vector vec_b);
// function to find the sqaure root of a number
float sqroot(float number);

//////////////////////////////////////////////////////////

void print(vector vec_a) {
	printf("\n");
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
    printf("\n");
	printf("\n");
}
//////////////////////////////////////////////////////////

void input(vector vec_a) {
	printf("Enter all four dimensions of given vector: ");
	for (int i=0;i<DIM;i++)
		scanf("%f",&vec_a[i]);
}

float sqroot(float number)
{
    return sqrt(number);
}

///////////////////////////////////////////////////////////


#endif

   

