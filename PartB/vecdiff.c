#include "veclib.h"

// Function for element wise addition of two vectors
void diff(vector vecA, vector vecB, vector vecC) {

	for (int i = 0; i < DIM; i++) {
		vecC[i] = vecA[i] - vecB[i];
	}

}
