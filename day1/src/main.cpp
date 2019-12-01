#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>

#include "fuel.hpp"

template<typename UnaryOperator>
int calculate_mass_with_function(std::string const& filename, UnaryOperator op);

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Needs at least one argument" << std::endl;
		return EXIT_FAILURE;
	}

	auto input = std::ifstream{argv[1]};
	auto const without_fuel_included = calculate_mass_with_function(argv[1], calculate_fuel_required);

	auto const with_fuel_included = calculate_mass_with_function(argv[1], calculate_fuel_required_with_fuel_included);

	std::cout << "Fuel required without fuel included: " << without_fuel_included << std::endl;
	std::cout << "Fuel required with fuel included: " << with_fuel_included << std::endl;

	return EXIT_SUCCESS;
}

template<typename UnaryOperator>
int calculate_mass_with_function(std::string const& filename, UnaryOperator op) {
	auto input = std::ifstream{filename};
	return std::transform_reduce(
			std::istream_iterator<int>{input},
			std::istream_iterator<int>{},
			0,
			std::plus<int>(),
			op);
}
