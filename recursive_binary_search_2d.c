#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const double EPS = 1e-6;

double lerp(double a, double b, double t) {
	return (1-t)*a + t*b;
}

double approx_pi(double xmin, double xmax, double ymin, double ymax) {
	if(xmax-xmin < EPS || ymax-ymin < EPS) return 0.0f;

	// Binary searching the border (by using linear interpolation)
	double low_coeff = 0.0f;
	double high_coeff = 1.0f;
	double mid_coeff;
	while(high_coeff - low_coeff >= EPS) {
		mid_coeff = (high_coeff+low_coeff) / 2;

		double xtmp = lerp(xmin, xmax, mid_coeff);
		double ytmp = lerp(ymin, ymax, mid_coeff);

		if(xtmp*xtmp + ytmp*ytmp <= 1.0f) {
			low_coeff = mid_coeff;
		}
		else {
			high_coeff = mid_coeff;
		}
	}

	double xmid = lerp(xmin, xmax, mid_coeff);
	double ymid = lerp(ymin, ymax, mid_coeff);

	return (xmid-xmin)*(ymid-ymin) +
	       approx_pi(xmin, xmid, ymid, ymax) +
	       approx_pi(xmid, xmax, ymin, ymid);
}

int main (void) {

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*approx_pi(0.0f, 1.0f, 0.0f, 1.0f));

	return EXIT_SUCCESS;
}