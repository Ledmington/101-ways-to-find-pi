#include "utils.hpp"

namespace gaussian_integral {

double gaussian_integral(const double eps) {
	double area_approx{0.0};

	for (double x{-3.0}; x <= 3.0; x += eps) {
		area_approx += (eps * gaussian_bell(x));
	}

	return area_approx * area_approx;
}

}  // namespace gaussian_integral