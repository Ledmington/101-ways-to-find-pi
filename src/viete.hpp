#include <cmath>

namespace viete {

// https://it.wikipedia.org/wiki/Formula_di_Vi%C3%A8te
double denominator(const size_t n) {
	if (n == 0) {
		return 1.0;
	}
	if (n == 1) {
		return std::sqrt(2.0);
	}
	return std::sqrt(2.0 + denominator(n - 1));
}

double viete(const size_t max_iterations) {
	double s{1.0};

	for (size_t i{0}; i < max_iterations; i++) {
		s *= (2.0 / denominator(i));
	}

	return s;
}

}  // namespace viete