#include <cmath>

double chebyshev(const size_t max_iterations) {
	double s{0.0};

	for (size_t i{0}; i < max_iterations; i++) {
		double k = (double)i;
		s += (2 * std::pow(-1, k) * std::pow(3, 0.5 - k)) / (2 * k + 1);
	}
	return s;
}
