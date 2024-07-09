
namespace recursive_4_splitting {

static double approx(const double eps, double xmin, double xmax, double ymin,
					 double ymax) {
	if (xmax - xmin < eps || ymax - ymin < eps) {
		return 0.0;
	}

	size_t inside{0};
	if (xmin * xmin + ymin * ymin <= 1.0) inside++;
	if (xmin * xmin + ymax * ymax <= 1.0) inside++;
	if (xmax * xmax + ymin * ymin <= 1.0) inside++;
	if (xmax * xmax + ymax * ymax <= 1.0) inside++;

	// All 4 vertices are outside the circle
	if (inside == 0) {
		return 0.0;
	}

	// All 4 vertices are inside the circle
	if (inside == 4) {
		return (xmax - xmin) * (ymax - ymin);
	}

	double xmid = (xmax + xmin) / 2.0;
	double ymid = (ymax + ymin) / 2.0;

	return approx(eps, xmin, xmid, ymin, ymid) +
		   approx(eps, xmin, xmid, ymid, ymax) +
		   approx(eps, xmid, xmax, ymin, ymid) +
		   approx(eps, xmid, xmax, ymid, ymax);
}

double recursive_4_splitting(const double eps) {
	return 4.0 * approx(eps, 0.0, 1.0, 0.0, 1.0);
}

}  // namespace recursive_4_splitting