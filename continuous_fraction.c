#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const unsigned int max_param = 20;

double continuous_fraction(unsigned int param) {
	if(param >= max_param) return 0.0f;
	double x = (double) param;
	return x*x / ((2*x+1) + continuous_fraction(param+1));
}

int main (void) {

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4/(1+continuous_fraction(1)));

	return EXIT_SUCCESS;
}