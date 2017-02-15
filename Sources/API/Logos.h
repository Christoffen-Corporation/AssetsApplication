#ifndef LOGOS_H_INCLUDED
#define LOGOS_H_INCLUDED
#include <cairo.h>
#include "include.h"
typedef void triangle;
typedef void     logo;

struct HTML {
char Title[50];
char Subtitle[50];
char History1[1000];
};

char args[50];

triangle ColoredTriangle(int const LOGO_WIDTH, int const LOGO_HEIGHT, 
                     double r, double g, double b, double a, double r2, double g2, double b2, double a2,
                     double verticeX1, double verticeY1, 
                     double verticeX2, double verticeY2, 
                     double verticeX3, double verticeY3, 
                     char img_name[50]);

triangle OutlinedTriangle(int const LOGO_WIDTH, int const LOGO_HEIGHT, 
                      double scaleX1, double scaleY1, 
                      double lineX1, double lineY1, 
                      double lineX2, double lineY2, 
                      double lineX3, double lineY3, 
                      double finishX1, double finishY1, 
                      char img_name[50]);

smash JoinTriangles(char tri_one[50], 
                  char tri_two[50], 
                  char tri_three[50], 
                  char tri_four[50], 
                  char tri_five[50], 
                  char tri_six[50], 
                  char tri_seven[50], 
                  char img_name[50]); 

logo OutlinedNoLogo();
logo OutlinedAll();
logo ColoredNoLogo();
logo ColoredAll();
logo Frankenlogos();
logo AllImages();
logo AllHTML();
#endif
