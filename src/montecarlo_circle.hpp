#include <random>

#include "utils.hpp"

double montecarlo_circle(const size_t num_points) {
	std::random_device dev;
	std::mt19937 rnd{dev()};
	std::uniform_real_distribution<double> dist{-1.0, 1.0};

	size_t inside{0};

	for (size_t i{0}; i < num_points; i++) {
		double x = dist(rnd);
		double y = dist(rnd);
		if (x * x + y * y <= 1.0) {
			inside++;
		}
	}

	return 4.0 * static_cast<double>(inside) / static_cast<double>(num_points);
}
