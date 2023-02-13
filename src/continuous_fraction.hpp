#include "iteration_based.hpp"

class ContinuousFraction : public IterationBasedAlgorithm {
public:
  ContinuousFraction()
      : IterationBasedAlgorithm("Continuous Fraction", "TODO") {}

  double run(const unsigned int max_iterations) {
    if (max_iterations >= 20) {
      return 0.0f;
    }
    double x = (double)max_iterations;
    return x * x / ((2 * x + 1) + run(max_iterations + 1));
  }
};