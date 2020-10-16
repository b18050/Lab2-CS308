#include "veclib.h"
//#include <math.h>

float norm(vector vec_a, vector vec_b)
{
	float norm_var=0.0;
	for(int i=0;i<DIM;i++)
		norm_var+=((vec_a[i]-vec_b[i])*(vec_a[i]-vec_b[i]));
	norm_var=sqroot(norm_var);
	return norm_var;
}
