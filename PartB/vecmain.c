
// main program
#include <stdio.h>
#include "veclib.h"
#include "vecprod.c"
#include "vecnorm.c"
#include "vecadd.c"
// #include "vecangle.c"
int main() {
	vector vecA, vecB, vecC;
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


	float ans;
	ans=norm(vecA,vecB);
	printf("Printing norm of vectors:%f\n",ans);


	return 0;

} // end main
/////////////////
