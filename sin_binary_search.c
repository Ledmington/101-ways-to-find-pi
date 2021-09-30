#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

	const double EPS = 1e-6;

	double low = 3.0f;
	double high = 3.5f;
	double mid;
	while(high-low >= EPS) {
		mid = (high+low)/2;

		if(sin(mid) > 0.0f) {
			low = mid;
		}
		else {
			high = mid;
		}
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", mid);

	return EXIT_SUCCESS;
}