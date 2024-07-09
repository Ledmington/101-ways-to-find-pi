namespace continuous_fraction {

double continuous_fraction(const size_t max_iterations) {
	// if (max_iterations >= 20) {
	// 	return continuous_fraction(20);
	// }

	// const double x = static_cast<double>(max_iterations);
	// return x * x / ((2 * x + 1) + continuous_fraction(max_iterations + 1));

	double s{1.0};
	for (size_t i{max_iterations}; i > 0; i--) {
		const double x = static_cast<double>(i);
		s = (2 * x - 1) + (x * x) / s;
	}

	return 4.0 / s;
}

}  // namespace continuous_fraction