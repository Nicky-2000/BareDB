cmake_minimum_required(VERSION 3.12)  # C++ 20 compatible
project(BareDB LANGUAGES CXX)

# Enforces C++20 as the standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add subdirectories
add_subdirectory(BareDBLib)
add_subdirectory(BareDB)
add_subdirectory(tests)
