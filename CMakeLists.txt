cmake_minimum_required(VERSION 3.10)
project(BareDB)

# Main Project Subdirectories
add_subdirectory(BareDBLib)
add_subdirectory(BareDB)

# Testing
enable_testing()
add_subdirectory(tests)
