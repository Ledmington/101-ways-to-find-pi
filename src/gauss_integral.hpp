#include "eps_based.hpp"
#include "utils.hpp"

class GaussianIntegral : public EPSBasedAlgorithm {
public:
  GaussianIntegral() : EPSBasedAlgorithm("Gaussian Integral", "TODO") {}

  double run(const double eps) {
    double area_approx = 0.0f;

    for (double x = -3.0f; x <= 3.0f; x += eps) {
      area_approx += (eps * gaussian_bell(x));
    }

    return area_approx * area_approx;
  }
};