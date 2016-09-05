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

void onChatAllPiecesClicked() {
struct stat st = {0};

if (stat("AppContent/IconChat/All", &st) == -1) {
    mkdir("AppContent/IconChat/All", 0700);
}

ChatIconFull();
}

void onChatJustPiecesClicked() {
struct stat st = {0};

if (stat("AppContent/IconChat/PiecesOnly", &st) == -1) {
    mkdir("AppContent/IconChat/PiecesOnly", 0700);
}

ChatIconPiecesOnly();
}

void onFrankenlogosClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/Frankenlogos", &st) == -1) {
    mkdir("AppContent/Logo/Frankenlogos", 0700);
}

 Frankenlogos();
}

void onColoredNoLogoClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/ColoredNoLogo", &st) == -1) {
    mkdir("AppContent/Logo/ColoredNoLogo", 0700);
}

 ColoredNoLogo(); 
}

void onAllClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/All", &st) == -1) {
    mkdir("AppContent/Logo/All", 0700);
}

 AllImages();
 AllHTML();
}

void onOutlinedNoLogoClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/OutlinedNoLogo", &st) == -1) {
    mkdir("AppContent/Logo/OutlinedNoLogo", 0700);
}

 OutlinedNoLogo();
}

void onOutlinedAllClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/OutlinedAll", &st) == -1) {
    mkdir("AppContent/Logo/OutlinedAll", 0700);
}

 OutlinedAll();
}

void onAllColorsClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/AllColors", &st) == -1) {
    mkdir("AppContent/Logo/AllColors", 0700);
}

 ColoredAll();
}

