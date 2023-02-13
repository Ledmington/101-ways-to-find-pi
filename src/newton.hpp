#include "iteration_based.hpp"
#include "utils.hpp"

class Newton : public IterationBasedAlgorithm {
public:
  Newton() : IterationBasedAlgorithm("Newton", "TODO") {}

  double run(const unsigned int num_iterations) {
    double s = 0.0f;

    for (unsigned int i = 0; i < num_iterations; i++) {
      double k = (double)i;
      s += fact(k) / semifact(2 * k + 1);
    }

    return 2 * s;
  }
};