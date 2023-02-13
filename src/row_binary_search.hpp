#include "eps_based.hpp"
class RowBinarySearch : public EPSBasedAlgorithm {
public:
  RowBinarySearch() : EPSBasedAlgorithm("Row binary search", "TODO") {}

  double run(const double eps) {
    double area_approx = 0.0f;

    for (double y = 0.0f; y <= 1.0f; y += eps) {
      double low = 0.0f;
      double high = 1.0f;
      double mid;
      while (high - low >= eps) {
        mid = (high + low) / 2;
        if (mid * mid + y * y <= 1.0f)
          low = mid;
        else
          high = mid;
      }

      area_approx += (mid * eps);
    }

    return 4 * area_approx;
  }
};