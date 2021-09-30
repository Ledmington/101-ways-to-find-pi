// https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const unsigned int max_param = 1000000;

int main (void) {

	double s = 0.0f;

	for(unsigned int i=0; i<max_param; i++) {
		s += 1/(2*(double)i+1);
		i++;
		s -= 1/(2*(double)i+1);
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*s);

	return EXIT_SUCCESS;
}