#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "../API/include.h"

copy CopyFiles() {
/**
 * Declarations of Independences
 */
 char to1[50];
 char from1[50];
 char to2[50];
 char from2[50];
 char to3[50];
 char from3[50];
 char to4[50];
 char from4[50];
 char to5[50];
 char from5[50];
 char to6[60];
 char from6[60];
 char to7[70];
 char from7[70];

 strcpy( to1, "UI/about.png" );
 strcpy( to2, "UI/GitHub-Mark-64px.png" );
 strcpy( to3, "UI/GitHub-Mark-Light-64px" );
 strcpy( to4, "UI/MainWindow.ui" );
 strcpy( to5, "UI/rsz_1rsz_1chat.png" );
 strcpy( to6, "UI/rsz_1rsz_image.jpg" );
 strcpy( to7, "UI/rsz_1rsz_octocat.png" );

 strcpy( from1, "../Sources/API/UI/about.png" );
 strcpy( from2, "../Sources/API/UI/GitHub-Mark-64px.png" );
 strcpy( from3, "../Sources/API/UI/GitHub-Mark-Light-64px" );
 strcpy( from4, "../Sources/API/UI/MainWindow.ui" );
 strcpy( from5, "../Sources/API/UI/rsz_1rsz_1chat.png" );
 strcpy( from6, "../Sources/API/UI/rsz_1rsz_image.jpg" );
 strcpy( from7, "../Sources/API/UI/rsz_1rsz_octocat.png" );

cp(to1, from1);
cp(to2, from2);
cp(to3, from3);
cp(to4, from4);
cp(to5, from5);
cp(to6, from6);
cp(to7, from7);
}

