#include "iteration_based.hpp"
#include <cmath>

class Chebyshev : public IterationBasedAlgorithm {
public:
  Chebyshev() : IterationBasedAlgorithm("Chebyshev", "TODO") {}

  double run(const unsigned int max_iterations) {
    double s = 0.0f;

    for (unsigned int i = 0; i < max_iterations; i++) {
      double k = (double)i;
      s += (2 * pow(-1, k) * pow(3, 0.5f - k)) / (2 * k + 1);
    }
    return s;
  }
};