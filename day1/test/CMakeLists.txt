add_executable(fuel_test fuel_test.cpp)
target_include_directories(fuel_test PUBLIC ${DAY_1_SOURCE_DIR}/include)
target_link_libraries(fuel_test fuel gtest gtest_main)

add_test(NAME FuelTest COMMAND fuel_test)
