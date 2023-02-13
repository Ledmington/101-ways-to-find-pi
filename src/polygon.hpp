#include "point_based.hpp"
#include <cmath>

typedef struct {
  double x, y;
} Point;

class Polygon : public PointBasedAlgorithm {
private:
  double get_y(double x) { return sqrt(1 - x * x); }

public:
  Polygon()
      : PointBasedAlgorithm("Polygon",
                            "Computes the area of the polygon corresponding to "
                            "a quarter of a circle.") {}

  double run(const unsigned int max_points) {
    Point border[max_points];

    border[0].x = 0.0f;
    border[0].y = 0.0f;

    // Finding the points on the border
    for (unsigned int i = 1; i < max_points; i++) {
      border[i].x = (double)i / (double)max_points;
      border[i].y = get_y(border[i].x);
    }

    // Calculating the area of the polygon defined by those points
    double approx_pi = 0.0f;
    for (unsigned int i = 0; i < max_points; i++) {
      unsigned int next = (i + 1) % max_points;
      approx_pi +=
          (border[i].x * border[next].y - border[i].y * border[next].x);
    }
    approx_pi = fabs(approx_pi / 2);

    return 4 * approx_pi;
  }
};