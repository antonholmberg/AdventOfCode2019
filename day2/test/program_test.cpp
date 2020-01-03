#include <gtest/gtest.h>
#include "program.hpp"
#include <vector>

TEST(ProgramTest, TestInitializes) {
	auto const vec = std::vector<int>({1, 2, 3});
	auto const program = Program{vec};
}
