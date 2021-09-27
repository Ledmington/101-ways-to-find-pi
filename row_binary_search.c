#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

	const double EPS = 1e-6;
	double area_approx = 0.0f;

	for(double y = 0.0f; y <= 1.0f; y += EPS) {
		double low = 0.0f;
		double high = 1.0f;
		double mid;
		while(high-low >= EPS) {
			mid = (high+low)/2;
			if(mid*mid + y*y <= 1.0f) low = mid;
			else high = mid;
		}

		area_approx += (mid*EPS);
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*area_approx);

	return EXIT_SUCCESS;
}