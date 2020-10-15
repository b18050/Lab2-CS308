#include "veclib.h"
#include <math.h>
#include <stdio.h>

float squareMagnitude(vector vec_a) {
    float mag2 = 0.0;
    for (int i=0;i<DIM;i++) {
        mag2 += (vec_a[i])*(vec_a[i]);
    }
    return mag2;
}
float angle(vector vec_a, vector vec_b) {
   float maga, magb;
   maga =  squareMagnitude(vec_a);
   magb = squareMagnitude(vec_b);
   float dotproduct = dotprod(vec_a, vec_b);
   // since a.b=|a||b|cos(@)
   float ans = acos(dotproduct/sqrt(maga*magb));
   //conversion to degrees from radians
   return ans*180/3.14159;
}
