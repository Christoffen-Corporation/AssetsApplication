#include <stdio.h>
#include <sys/stat.h>
#include <argp.h>
#include <gtk/gtk.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "../API/Logos.h"
#include "../API/include.h"
/**
  * TODO: Implement these into the code below. Speculate the creation number when creating the original logo generator.
  * <img src=\"AppContent/Logo/All/triangle1-color.png\">
  * <img src=\"AppContent/Logo/All/triangle2-color.png\">
  * <img src=\"AppContent/Logo/All/triangle3-color.png\">
  * <img src=\"AppContent/Logo/All/triangle4-color.png\">
  * <img src=\"AppContent/Logo/All/triangle5-color.png\">
  * <img src=\"AppContent/Logo/All/triangle6-color.png\">
  * <img src=\"AppContent/Logo/All/triangle7-color.png\"> 
  */

void AllHTML() {
struct stat st = {0};

if (stat(".HTML", &st) == -1) {
    mkdir(".HTML", 0700);
}

 struct HTML All;
 All.Title[50];
 All.Subtitle[50];
 All.History1[1000];

 strcpy( All.Title, "<center><h1>The Assets Application</h1>" );
 strcpy( All.Subtitle, "<h2>Your Generated Images:</h2><br />" );
 strcpy( All.History1, "<b>1)</b><img src=\"../AppContent/Logo/All/crstfn-color.png\"><br></p>This is the logo as of October 17th, 2015. Though the code to generate it has changed, the outfit has definitely not.</p>" );

 FILE *fp;

 fp = fopen(".HTML/AllHistory.html", "w+");
 fprintf(fp, All.Title);
 fprintf(fp, All.Subtitle);
 fprintf(fp, All.History1);
 fclose(fp);
}
