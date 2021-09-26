#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

	const double EPS = 1e-4;
	unsigned int inside = 0;
	unsigned int total = 0;

	for(double x = -1.0f; x <= 1.0f; x += EPS) {
		for(double y = -1.0f; y <= 1.0f; y += EPS) {
			total++;
			if(x*x + y*y <= 1.0f) inside++;
		}
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*(double)inside/(double)total);

	return EXIT_SUCCESS;
}