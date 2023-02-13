#include "point_based.hpp"
#include "utils.hpp"

class MontecarloCircle : public PointBasedAlgorithm {
public:
  MontecarloCircle()
      : PointBasedAlgorithm("Montecarlo Circle", "The classic 2D Montecarlo.") {
  }

  double run(const unsigned int num_points) {
    srand(time(NULL));

    unsigned int inside = 0;

    for (unsigned int i = 0; i < num_points; i++) {
      double x = randab(-1.0f, 1.0f);
      double y = randab(-1.0f, 1.0f);
      if (x * x + y * y <= 1.0f)
        inside++;
    }

    return 4 * (double)inside / (double)num_points;
  }
};