#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

	const unsigned int max_param = 10;
	double s = 0.0f;

	for(unsigned int i=0; i<max_param; i++) {
		double k = (double)i;
		s += (1/pow(16,k)) * (4/(8*k+1) - 2/(8*k+4) - 1/(8*k+5) - 1/(8*k+6));
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", s);

	return EXIT_SUCCESS;
}