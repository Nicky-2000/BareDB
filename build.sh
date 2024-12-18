#!/bin/bash
# Clean the previous build
rm -rf ./build/
mkdir ./build/

cd ./build/

# Run cmake and make
cmake ..
make

# Copy the built executable to the bin/ directory
rm -rf ../bin/
mkdir -p ../bin/
cp ./BareDB/BareDB ../bin/

echo "Build successful. Executable is in the 'bin' directory."