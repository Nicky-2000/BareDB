# # Add Google Test (or Catch2)
# add_subdirectory(googletest)

# # Add test executables
# add_executable(test_calc test_calc.cc)
# target_link_libraries(test_calc PRIVATE BareDBLib gtest gtest_main)

# add_executable(test_main test_main.cc)
# target_link_libraries(test_main PRIVATE BareDBLib gtest gtest_main)

# # Register tests with CTest
# add_test(NAME CalcTest COMMAND test_calc)
# add_test(NAME MainTest COMMAND test_main)
