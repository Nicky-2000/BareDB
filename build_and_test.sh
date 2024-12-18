#!/bin/bash

# Exit on any error
set -e

# Define directories
BUILD_DIR="build"
TEST_RESULTS="test_results.log"

rm -rf build

echo "Creating build directory..."
mkdir "$BUILD_DIR"

# Step 2: Navigate to the build directory
cd "$BUILD_DIR"

# Step 3: Run CMake configuration
echo "Configuring the project with CMake..."
cmake .. -DBUILD_TESTS=ON

# Step 4: Build the project
echo "Building the project..."
make

# Step 5: Run tests using CTest
echo "Running tests..."
ctest --output-on-failure | tee "../$TEST_RESULTS"

# Step 6: Display results
echo "Test results have been logged to $TEST_RESULTS."
