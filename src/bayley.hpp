#include <cmath>

double bayley(const size_t max_iterations) {
	double s{0.0};

	for (size_t i{0}; i < max_iterations; i++) {
		double k = (double)i;
		s += (1 / std::pow(16, k)) * (4 / (8 * k + 1) - 2 / (8 * k + 4) -
									  1 / (8 * k + 5) - 1 / (8 * k + 6));
	}

	return s;
}
