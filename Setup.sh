#!/bin/bash
BASEDIR=$(dirname "$0")

GNU_GCC=$("$GNU_GCC/")

CAIRO="-I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libdrm -I/usr/include/libpng16"

JOIN_PIECES="Sources/API/JoinPieces"

echo "Welcome to the AssetsApplication Setup!"; 
echo "The reason for this script is for developers to choose which build system they want to use."; 
echo "Afterwards, the program can be built and run like normal";

echo "Choose an option:";
echo "1. CMake and Clang";
echo "2 CMake and Clang to LLVM IR";
echo "3. GNU Autotools and GCC";

read OPTION;

if [ $OPTION -eq 1 ] then
	git submodule init
	git submodule update
	cp $BASEDIR\/\AA-CMake-Clang\/\CMakeLists.txt $BASEDIR
	export CC=clang
	export CXX=clang++
	cmake -H. -Bbuild
	cmake --build build -- -j3 
elif [ $OPTION -eq 2 ] then
	mkdir $BASEDIR\/\IR
        mkdir $BASEDIR\/\IR\/\API
        mkdir $BASEDIR\/\IR\/\API\/\JoinPieces
	clang -emit-llvm -S -o - $BASEDIR/$JOIN_PIECES/JoinTriangles.c $CAIRO > $BASEDIR\/\IR\/\API\/\JoinPieces\/\JoinTriangles.ir

elif [ $OPTION -eq 3 ] then
	git submodule foreach git pull origin master
	cp $BASEDIR\/\$GNU_GCC\/\aclocal.m4 $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\compile $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\config.h.in $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\configure $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\configure.ac $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\depcomp $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\install-sh $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\Makefile.am $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\Makefile.in $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\missing $BASEDIR
	cp $BASEDIR\/\$GNU_GCC\/\Sources\/\Makefile.am $BASEDIR\/\Sources\/\Assets
	cp $BASEDIR\/\$GNU_GCC\/\Sources\/\Makefile.in $BASEDIR\/\Sources\/\Assets
	./configure
	make
fi




