#include <array>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>

#include "bayley.hpp"
#include "chebyshev.hpp"
#include "continuous_fraction.hpp"
#include "gauss_integral.hpp"
#include "grid.hpp"
#include "leibniz.hpp"
#include "montecarlo_circle.hpp"
#include "montecarlo_sphere.hpp"
#include "newton.hpp"
#include "polygon.hpp"
#include "recursive_4_splitting.hpp"
#include "recursive_binary_search.hpp"
#include "row_binary_search.hpp"
#include "viete.hpp"

int main(void) {
	std::map<std::string, std::function<double(size_t)>> iteration_based{
		{"Bayley", bayley},
		{"Chebyshev", chebyshev},
		{"ContinuousFraction", continuous_fraction::continuous_fraction},
		{"Leibniz", leibniz},
		{"Newton", newton},
		{"Viete", viete::viete}};
	std::map<std::string, std::function<double(double)>> precision_based{
		{"Grid", grid::grid},
		{"GaussianIntegral", gaussian_integral::gaussian_integral},
		{"Recursive4Splitting", recursive_4_splitting::recursive_4_splitting},
		{"RecursiveBinarySearch",
		 recursive_binary_search::recursive_binary_search},
		{"RowBinarySearch", row_binary_search::row_binary_search}};
	std::map<std::string, std::function<double(size_t)>> point_based{
		{"MontecarloCircle", montecarlo_circle},
		{"MontecarloSphere", montecarlo_sphere},
		{"Polygon", polygon}};

	std::cout << " ### Iteration-based algorithms ### " << std::endl;
	for (auto const& [name, algo] : iteration_based) {
		std::cout << name << '\n'
				  << "Value: " << std::setprecision(20)
				  << algo(static_cast<size_t>(100)) << '\n'
				  << std::endl;
	}

	std::cout << std::endl;

	std::cout << " ### Precision-based algorithms ### " << std::endl;
	for (auto const& [name, algo] : precision_based) {
		std::cout << name << '\n'
				  << "Value: " << std::setprecision(20) << algo(1e-4) << '\n'
				  << std::endl;
	}

	std::cout << std::endl;

	std::cout << " ### Point-based algorithms ### " << std::endl;
	for (auto const& [name, algo] : point_based) {
		std::cout << name << '\n'
				  << "Value: " << std::setprecision(20) << algo(100000) << '\n'
				  << std::endl;
	}

	return 0;
}