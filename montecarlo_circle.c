#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double randab(double a, double b) {
	return (double)rand()/(double)RAND_MAX * (b-a) + a;
}

int main (void) {
	srand(time(NULL));

	const unsigned int num_iterations = 1000000;
	unsigned int inside = 0;

	for(unsigned int i=0; i<num_iterations; i++) {
		double x = randab(-1.0f, 1.0f);
		double y = randab(-1.0f, 1.0f);
		if(x*x + y*y <= 1.0f) inside++;
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*(double)inside/(double)num_iterations);

	return EXIT_SUCCESS;
}