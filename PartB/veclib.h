#ifndef HEADER_FILE
#define HEADER_FILE
#define DIM 4
// vector type
typedef float vector[DIM];

// functions
// print vector
void print(vector vec_a);
// vector addition
void add(vector vec_a, vector vec_b, vector vec_c);
// elementwise product
void eleProd(vector vec_a, vector vec_b, vector vector_c);
// difference of two vectors
void diff(vector vec_a, vector vec_b, vector vector_c);
// dot product
void dotprod(vector vec_a, vector vec_b, vector vector_c);
// add other functions as needed


//////////////////////////////////////////////////////////

void print(vector vec_a) {
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}
//////////////////////////////////////////////////////////

void input(vector vec_a) {
	printf("Enter all four dimensions of given vector");
	for (int i=0;i<DIM;i++)
		scanf("%f ",&vec_a[i]);
}

///////////////////////////////////////////////////////////


#endif