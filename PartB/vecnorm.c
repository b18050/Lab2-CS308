#include "veclib.h"
//#include <math.h>

float norm(vector vec_a, vector vec_b)
{
	float norm=0.0;
	for(int i=0;i<DIM;i++)
		norm+=((vec_a[i]-vec_b[i])*(vec_a[i]-vec_b[i]))+norm;
	norm=sqroot(norm);
	return norm;
}