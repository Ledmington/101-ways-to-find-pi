#include <random>

#include "utils.hpp"

double montecarlo_sphere(const size_t num_points) {
	std::random_device dev;
	std::mt19937 rnd{dev()};
	std::uniform_real_distribution<double> dist(-1.0, 1.0);

	size_t inside{0};

	for (size_t i{0}; i < num_points; i++) {
		double x = dist(rnd);
		double y = dist(rnd);
		double z = dist(rnd);
		if (x * x + y * y + z * z <= 1.0) {
			inside++;
		}
	}

	return static_cast<double>(inside) / static_cast<double>(num_points) * 6.0;
}
