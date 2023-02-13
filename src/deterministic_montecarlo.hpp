#include "eps_based.hpp"

class DeterministicMontecarlo : public EPSBasedAlgorithm {
public:
  DeterministicMontecarlo()
      : EPSBasedAlgorithm(
            "Deterministic Montecarlo",
            "Like classic Montecarlo but with unifromly placed points.") {}

  double run(const double eps) {
    unsigned int inside = 0;
    unsigned int total = 0;

    for (double x = -1.0f; x <= 1.0f; x += eps) {
      for (double y = -1.0f; y <= 1.0f; y += eps) {
        total++;
        if (x * x + y * y <= 1.0f)
          inside++;
      }
    }

    return 4 * (double)inside / (double)total;
  }
};