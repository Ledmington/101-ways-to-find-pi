#include "utils.hpp"

double newton(const size_t num_iterations) {
	double s{0.0};

	for (size_t i{0}; i < num_iterations; i++) {
		double k = (double)i;
		s += fact(k) / semifact(2 * k + 1);
	}

	return 2.0 * s;
}
