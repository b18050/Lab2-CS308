// main program
#include <stdio.h>
#include "veclib.h"
#include "vecadd.c"
#include "vecdiff.c"
#include "vecprod.c"
#include "vecnorm.c"
#include "vecdot.c"
#include "vecangle.c"

int main() {
	vector vecA, vecB, vecC;
	float ans;
	// read vectors vecA, vecB as input
	input(vecA);
	input(vecB);

	printf("Printing vector sum\n");
	add(vecA,vecB,vecC);
	print(vecC);
	
	// print and display other outputs
	// product, difference, dot product, angle
	
	printf("Printing element-wise product of vectors:\n");
	eleProd(vecA,vecB,vecC);
	print(vecC);
	
	printf("Printing vector difference\n");
	diff(vecA,vecB,vecC);
	print(vecC);
	
	ans=norm(vecA,vecB);
	printf("Printing norm of vectors:%f\n",ans);

	ans=dotprod(vecA,vecB);
	printf("Printing dot product of vectors:%f\n",ans);

	ans=angle(vecA,vecB);
	printf("Printing angle between vectors:%f\n",ans);

	return 0;

} // end main
/////////////////
