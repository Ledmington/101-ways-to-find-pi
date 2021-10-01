#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double fact(double x) {
	double prod = 1.0f;
	for(double i=x; i>=1; i--) {
		prod *= i;
	}
	return prod;
}

double semifact(double x) {
	double prod = 1.0f;
	for(double i=x; i>=1; i-=2) {
		prod *= i;
	}
	return prod;
}

int main (void) {

	const unsigned int max_param = 20;
	double s = 0.0f;

	for(unsigned int i=0; i<max_param; i++) {
		double k = (double)i;
		s += fact(k) / semifact(2*k+1);
	}

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 2*s);

	return EXIT_SUCCESS;
}