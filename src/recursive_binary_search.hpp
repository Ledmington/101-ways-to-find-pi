#include "eps_based.hpp"
#include "utils.hpp"

class RecursiveBinarySearch : public EPSBasedAlgorithm {
private:
  double approx(const double eps, double xmin, double xmax, double ymin,
                double ymax) {
    if (xmax - xmin < eps || ymax - ymin < eps)
      return 0.0f;

    // Binary searching the border (by using linear interpolation)
    double low_coeff = 0.0f;
    double high_coeff = 1.0f;
    double mid_coeff;
    while (high_coeff - low_coeff >= eps) {
      mid_coeff = (high_coeff + low_coeff) / 2;

      double xtmp = lerp(xmin, xmax, mid_coeff);
      double ytmp = lerp(ymin, ymax, mid_coeff);

      if (xtmp * xtmp + ytmp * ytmp <= 1.0f) {
        low_coeff = mid_coeff;
      } else {
        high_coeff = mid_coeff;
      }
    }

    double xmid = lerp(xmin, xmax, mid_coeff);
    double ymid = lerp(ymin, ymax, mid_coeff);

    return (xmid - xmin) * (ymid - ymin) + approx(eps, xmin, xmid, ymid, ymax) +
           approx(eps, xmid, xmax, ymin, ymid);
  }

public:
  RecursiveBinarySearch()
      : EPSBasedAlgorithm("Recursive binary search", "TODO") {}

  double run(const double eps) { return 4 * approx(eps, 0.0, 1.0, 0.0, 1.0); }
};