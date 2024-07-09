#ifndef UTILS_HPP_INCLUDED
#define UTILS_HPP_INCLUDED

double fact(const double x) {
	double prod{1.0};
	for (double i{x}; i >= 1; i--) {
		prod *= i;
	}
	return prod;
}

double semifact(const double x) {
	double prod{1.0};
	for (double i{x}; i >= 1; i -= 2) {
		prod *= i;
	}
	return prod;
}

double gaussian_bell(const double x) { return std::exp(-x * x); }

double lerp(const double a, const double b, const double t) {
	return (1 - t) * a + t * b;
}

#endif	// UTILS_HPP_INCLUDED