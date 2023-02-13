// https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi

#include "iteration_based.hpp"

class Leibniz : public IterationBasedAlgorithm {
public:
  Leibniz() : IterationBasedAlgorithm("Leibniz", "TODO") {}

  double run(const unsigned int max_iterations) {
    double s = 0.0f;

    for (unsigned int i = 0; i < max_iterations; i++) {
      s += 1 / (2 * (double)i + 1);
      i++;
      s -= 1 / (2 * (double)i + 1);
    }

    return 4 * s;
  }
};