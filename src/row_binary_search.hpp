
namespace row_binary_search {

double row_binary_search(const double eps) {
	double area_approx{0.0};

	for (double y{0.0}; y <= 1.0; y += eps) {
		double low{0.0};
		double high{1.0};
		double mid;
		while (high - low >= eps) {
			mid = (high + low) / 2.0;
			if (mid * mid + y * y <= 1.0)
				low = mid;
			else
				high = mid;
		}

		area_approx += (mid * eps);
	}

	return 4.0 * area_approx;
}

}  // namespace row_binary_search