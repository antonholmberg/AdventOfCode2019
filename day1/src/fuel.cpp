#include "fuel.hpp"

int calculate_fuel_required(int mass) {
	return mass / 3 - 2;
}

int calculate_fuel_required_with_fuel_included(int mass) {
	int total_fuel = 0;
	int fuel_for_mass = calculate_fuel_required(mass);

	while (fuel_for_mass > 0) {
		total_fuel += fuel_for_mass;
		fuel_for_mass = calculate_fuel_required(fuel_for_mass);
	}

	return total_fuel;
}
