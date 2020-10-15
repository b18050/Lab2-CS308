#include "veclib.h"

void eleProd(vector vec_a, vector vec_b, vector vector_c)
{
	for(int i=0;i<DIM;i++)
		vector_c[i]=vec_a[i]*vec_b[i];
}