#!/bin/bash
BASEDIR=$(dirname "$0")

echo "Welcome to the AssetsApplication Setup!"; 
echo "The reason for this script is for developers to choose which build system they want to use."; 
echo "Afterwards, the program can be built and run like normal";

echo "Choose an option:";
echo "1. CMake and Clang";
echo "2. GNU Autotools and GCC";

read OPTION;

if [ $OPTION -eq 1 ] 
then
	if [ ! -d "AssetsApplication-CMake-Clang" ]; 
	then
		echo "CMake-Clang not found, cloning them as deps from GitHub"
		git clone https\:\/\/\github.com\/\ChristoffenOSWorks\/\AssetsApplication-CMake-Clang.git
	else
		echo "Moving on"
	fi
	cp $BASEDIR\/\AssetsApplication-CMake-Clang\/\CMakeLists.txt $BASEDIR
	export CC=clang
	export CXX=clang++
	cmake -H. -Bbuild
	cmake --build build -- -j3
elif [ $OPTION -eq 2 ] 
then
	if [ ! -d "AssetsApplication-GNU-GCC" ]; 
	then
		echo "GNU-GCC not found, cloning them as deps from GitHub"
		git clone https\:\/\/\github.com\/\ChristoffenOSWorks\/\AssetsApplication-GNU-GCC.git
	else
		echo "Moving on"
	fi
	git clone https\:\/\/\github.com\/\ChristoffenOSWorks\/\AssetsApplication-GNU-GCC.git
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\aclocal.m4 $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\compile $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\config.h.in $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\configure $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\configure.ac $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\depcomp $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\install-sh $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\Makefile.am $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\Makefile.in $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\missing $BASEDIR
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\Sources\/\Makefile.am $BASEDIR\/\Sources\/\Assets
	cp $BASEDIR\/\AssetsApplication-GNU-GCC\/\Sources\/\Makefile.in $BASEDIR\/\Sources\/\Assets
	./configure
	make
fi




