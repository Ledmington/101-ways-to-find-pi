#include <cmath>
#include <vector>

typedef struct {
	double x, y;
} Point;

static double get_y(const double x) { return std::sqrt(1 - x * x); }

double polygon(const size_t max_points) {
	std::vector<Point> border(max_points);

	border[0].x = 0.0;
	border[0].y = 0.0;

	// Finding the points on the border
	for (size_t i{1}; i < max_points; i++) {
		border[i].x = static_cast<double>(i) / static_cast<double>(max_points);
		border[i].y = get_y(border[i].x);
	}

	// Calculating the area of the polygon defined by those points
	double approx_pi{0.0};
	for (size_t i{0}; i < max_points; i++) {
		size_t next = (i + 1) % max_points;
		approx_pi +=
			(border[i].x * border[next].y - border[i].y * border[next].x);
	}
	approx_pi = std::abs(approx_pi / 2.0);

	return 4.0 * approx_pi;
}
