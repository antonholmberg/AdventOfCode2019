add_library(fuel fuel.cpp)
target_include_directories(fuel PUBLIC ${DAY_1_SOURCE_DIR}/include)

add_executable(day1 main.cpp)
target_include_directories(day1 PUBLIC ${DAY_1_SOURCE_DIR}/include)
target_link_libraries(day1 fuel)
