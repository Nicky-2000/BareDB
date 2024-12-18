# Add unit test executable for Calc
add_executable(test_calc test_calc.cc)
target_link_libraries(test_calc PRIVATE BareDBLib gtest gtest_main)

add_test(NAME UnitTest_Calc COMMAND test_calc)
