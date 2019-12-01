#include <gtest/gtest.h>
#include "fuel.hpp"

TEST(FuelTest, TestCalculateFuelRequired) {
	EXPECT_EQ(2, calculate_fuel_required(12));
}

TEST(FuelTest, TestCalculateFuelForFuel) {
	EXPECT_EQ(2, calculate_fuel_required_with_fuel_included(12));
	EXPECT_EQ(966, calculate_fuel_required_with_fuel_included(1969));
}
