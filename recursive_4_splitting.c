#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const double EPS = 1e-6;

double approx_pi(double xmin, double xmax, double ymin, double ymax) {
	if(xmax-xmin < EPS || ymax-ymin < EPS) return 0.0f;

	int inside = 0;
	if(xmin*xmin + ymin*ymin <= 1.0f) inside++;
	if(xmin*xmin + ymax*ymax <= 1.0f) inside++;
	if(xmax*xmax + ymin*ymin <= 1.0f) inside++;
	if(xmax*xmax + ymax*ymax <= 1.0f) inside++;

	// All 4 vertices are outside the circle
	if(inside == 0) return 0.0f;

	// All 4 vertices are inside the circle
	if(inside == 4) return (xmax-xmin)*(ymax-ymin);

	double xmid = (xmax+xmin)/2;
	double ymid = (ymax+ymin)/2;

	return approx_pi(xmin, xmid, ymin, ymid) +
	       approx_pi(xmin, xmid, ymid, ymax) +
	       approx_pi(xmid, xmax, ymin, ymid) +
	       approx_pi(xmid, xmax, ymid, ymax);
}

int main (void) {

	printf("Real PI:    %.20f\n", M_PI);
	printf("Approx. PI: %.20f\n", 4*approx_pi(0.0f, 1.0f, 0.0f, 1.0f));

	return EXIT_SUCCESS;
}