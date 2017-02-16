#!/bin/bash
echo "Welcome to the AssetsApplication Setup!"; 
echo "The reason for this script is for developers to choose which build system they want to use."; 
echo "Afterwards, the program can be built and run like normal";

echo "Choose an option:";
echo "1. CMake and Clang";
echo "2. GNU Autotools and GCC";

read OPTION;

if [ $OPTION -eq 1 ] 
then
	cp AssetsApplication-CMake-Clang\/\CMakeLists.txt ..\/\AssetsApplication
	export CC=clang
	export CXX=clang++
	cmake -H. -Bbuild
	cmake --build build -- -j3
elif [ $OPTION -eq 2 ] 
then
	cp AssetsApplication-GNU-GCC\/\aclocal.m4 ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\compile ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\config.h.in ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\configure ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\configure.ac ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\depcomp ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\install-sh ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\Makefile.am ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\Makefile.in ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\missing ..\/\AssetsApplicationC1
	cp AssetsApplication-GNU-GCC\/\Sources\/\Makefile.am ..\/\AssetsApplicationC1\/\Sources\/\Assets
	cp AssetsApplication-GNU-GCC\/\Sources\/\Makefile.in ..\/\AssetsApplicationC1\/\Sources\/\Assets
	./configure
	make
fi




