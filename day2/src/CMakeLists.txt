add_library(program program.cpp)
target_include_directories(program PUBLIC ${DAY_2_SOURCE_DIR}/include)

add_executable(day2 main.cpp)
target_link_libraries(day2 program)
