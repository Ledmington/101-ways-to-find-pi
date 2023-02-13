#include "point_based.hpp"
#include "utils.hpp"

class MontecarloSphere : public PointBasedAlgorithm {
public:
  MontecarloSphere()
      : PointBasedAlgorithm("Montecarlo Sphere",
                            "Like classic 2D Montecarlo, but in 3D.") {}

  double run(const unsigned int num_points) {
    srand(time(NULL));

    unsigned int inside = 0;

    for (unsigned int i = 0; i < num_points; i++) {
      double x = randab(-1.0f, 1.0f);
      double y = randab(-1.0f, 1.0f);
      double z = randab(-1.0f, 1.0f);
      if (x * x + y * y + z * z <= 1.0f) {
        inside++;
      }
    }

    return (double)inside / (double)num_points * 6;
  }
};