
// https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi
double leibniz(const size_t max_iterations) {
	double s{0.0};

	for (size_t i{0}; i < max_iterations; i++) {
		s += 1 / (2 * (double)i + 1);
		i++;
		s -= 1 / (2 * (double)i + 1);
	}

	return 4.0 * s;
}
