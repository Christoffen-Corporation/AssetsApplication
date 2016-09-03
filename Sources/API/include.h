/* The Christoffen Corporation Logo Generator
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * This is the main header file. All the functions in the
 * other C files use this file to figure out where they
 * are referencing to when a function from another file is 
 * used.
 */

#ifndef INCLUDE_H_INCLUDED
#define INCLUDE_H_INCLUDED
#include <cairo.h>

void CopyFiles();

int cp(const char *to, const char *from);

int join_icon_chat(char tri_one[50], char tri_two[50], char tri_three[50], char tri_four[50], char tri_five[50], char tri_six[50], char tri_seven[50], char img_name[50]);

void polygon(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, double verticeX4, double verticeY4, double verticeX5, double verticeY5, double verticeX6, double verticeY6, double verticeX7, double verticeY7, double verticeX8, double verticeY8, double verticeX9, double verticeY9, char img_name[50]);

void rhombus(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, double verticeX4, double verticeY4, char img_name[50]);

char args[50];

void ColoredTriangle(int const LOGO_WIDTH, int const LOGO_HEIGHT, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, char img_name[50]);

void OutlinedTriangle(int img_width, int img_height, double scaleX1, double scaleY1, double lineX1, double lineY1, double lineX2, double lineY2, double lineX3, double lineY3, double finishX1, double finishY1, char img_name[50]);

int JoinTriangles(char tri_one[50], char tri_two[50], char tri_three[50], char tri_four[50], char tri_five[50], char tri_six[50], char tri_seven[50], char img_name[50]); 

void OutlinedNoLogo();

void OutlinedAll();

void ColoredNoLogo();

void ColoredAll();

void Frankenlogos();

void all_imgs();

void ChatIconFull();

void ChatIconPiecesOnly();

#endif
