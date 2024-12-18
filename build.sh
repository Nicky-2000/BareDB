#!/bin/bash

BUILD_DIR="build"

if [ -d "$BUILD_DIR" ]; then
    echo "Cleaning existing build directory..."
    rm -rf "$BUILD_DIR"
fi

echo "Creating build directory..."
mkdir ./build/
cd ./build/
cmake ..
make

cd ..

echo "Copying executable to bin directory..."

if [ -d "bin/" ]; then
    rm -rf "bin/"
fi
mkdir -p ./bin/
cp ./build/BareDB/BareDB ./bin/

echo "Build successful. Executable is in the 'bin' directory."