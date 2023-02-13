// https://it.wikipedia.org/wiki/Formula_di_Vi%C3%A8te

#include "iteration_based.hpp"
#include <cmath>

class Viete : public IterationBasedAlgorithm {
private:
  double viete(unsigned int param) {
    if (param == 0)
      return 1.0f;
    if (param == 1)
      return sqrt(2.0f);
    return sqrt(2 + viete(param - 1));
  }

public:
  Viete() : IterationBasedAlgorithm("Viete", "TODO") {}

  double run(const unsigned int max_iterations) {
    double s = 1.0f;

    for (unsigned int i = 0; i < max_iterations; i++) {
      s *= (2 / viete(i));
    }

    return s;
  }
};