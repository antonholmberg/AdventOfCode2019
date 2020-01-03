add_executable(program_test program_test.cpp)

target_link_libraries(program_test program gtest gtest_main)

add_test(NAME ProgramTest COMMAND program_test)
