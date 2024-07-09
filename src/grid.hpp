namespace grid {

double grid(const double eps) {
	size_t inside{0};
	size_t total{0};

	for (double x{-1.0}; x <= 1.0; x += eps) {
		for (double y{-1.0}; y <= 1.0; y += eps) {
			total++;
			if (x * x + y * y <= 1.0) {
				inside++;
			}
		}
	}

	return 4.0 * static_cast<double>(inside) / static_cast<double>(total);
}

}  // namespace grid