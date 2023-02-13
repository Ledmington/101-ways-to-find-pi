#include "iteration_based.hpp"
#include <cmath>

class Bayley : public IterationBasedAlgorithm {
public:
  Bayley() : IterationBasedAlgorithm("Bayley", "TODO") {}

  double run(const unsigned int max_iterations) {
    double s = 0.0f;

    for (unsigned int i = 0; i < max_iterations; i++) {
      double k = (double)i;
      s += (1 / pow(16, k)) * (4 / (8 * k + 1) - 2 / (8 * k + 4) -
                               1 / (8 * k + 5) - 1 / (8 * k + 6));
    }

    return s;
  }
};