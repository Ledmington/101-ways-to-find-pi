// https://it.wikipedia.org/wiki/Formula_di_Vi%C3%A8te

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const unsigned int max_param = 20;

double viete(unsigned int param) {
	if(param == 0) return 1.0f;
	if(param == 1) return sqrt(2.0f);
	return sqrt(2 + viete(param-1));
}

int main (void) {

	double s = 1.0f;

	for(unsigned int i=0; i<max_param; i++) {
		s *= (2 / viete(i));
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", s);

	return EXIT_SUCCESS;
}