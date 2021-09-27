#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double gaussian_bell(double x) {
	return exp(-x*x);
}

int main(void) {

	const double EPS = 1e-6;
	double area_approx = 0.0f;

	for(double x = -3.0f; x <= 3.0f; x += EPS) {
		area_approx += (EPS*gaussian_bell(x));
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", area_approx*area_approx);

	return EXIT_SUCCESS;
}