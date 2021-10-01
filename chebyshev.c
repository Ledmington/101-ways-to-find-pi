#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

	const unsigned int max_param = 20;
	double s = 0.0f;

	for(unsigned int i=0; i<max_param; i++) {
		double k = (double)i;
		s += (2 * pow(-1,k) * pow(3, 0.5f-k) )/ (2*k+1);
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", s);

	return EXIT_SUCCESS;
}