add_executable(test_baredb test_baredb.cc)
target_link_libraries(test_baredb PRIVATE BareDBLib gtest gtest_main)

add_test(NAME IntegrationTest_BareDB COMMAND test_baredb)
