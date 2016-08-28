#include <cairo.h>
#include "../API/include.h"

void ChatIconFull() {
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 3.0, 4.0, 253.0, 4.0, 253.0, 195.0, 3.0, 195.0, "AppContent/IconChat/All/box1.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 60.0, 197.0, 193.0, 197.0, 193.0, 226.0, 60.0, 226.0, "AppContent/IconChat/All/box2.png");
	rhombus(256, 256, 0, 0, 0.9, 0.8, 23.0, 22.0, 229.0, 22.0, 229.0, 178.0, 22.0, 179.0, "AppContent/IconChat/All/box3.png");
	rhombus(256, 256, 0, 0, 0.9, 0.8, 64.0, 228.0, 195.0, 228.0, 216.0, 255.0, 38.0, 255.0, "AppContent/IconChat/All/box4.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 84.0, 82.0, 102.0, 82.0, 103.0, 99.0, 85.0, 99.0, "AppContent/IconChat/All/box5.png");
	polygon(256, 256, 0.5, 0.4, 1, 0.8, 64.0, 51.0, 184.0, 51.0, 185.0, 135.0, 107.0, 135.0, 108.0, 134.0, 83.0, 162.0, 80.0, 134.0, 80.0, 135.0, 63.0, 135.0, "AppContent/IconChat/All/box6.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 115, 80, 132, 82, 137, 100, 117, 100, "AppContent/IconChat/All/box7.png");
	join_icon_chat("AppContent/IconChat/All/box1.png", "AppContent/IconChat/All/box2.png", "AppContent/IconChat/All/box3.png", "AppContent/IconChat/All/box4.png", "AppContent/IconChat/All/box6.png", "AppContent/IconChat/All/box7.png", "AppContent/IconChat/All/box5.png", "AppContent/IconChat/All/chat.png");
}

void ChatIconPiecesOnly() {
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 3.0, 4.0, 253.0, 4.0, 253.0, 195.0, 3.0, 195.0, "AppContent/IconChat/PiecesOnly/box1.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 60.0, 197.0, 193.0, 197.0, 193.0, 226.0, 60.0, 226.0, "AppContent/IconChat/PiecesOnly/box2.png");
	rhombus(256, 256, 0, 0, 0.9, 0.8, 23.0, 22.0, 229.0, 22.0, 229.0, 178.0, 22.0, 179.0, "AppContent/IconChat/PiecesOnly/box3.png");
	rhombus(256, 256, 0, 0, 0.9, 0.8, 64.0, 228.0, 195.0, 228.0, 216.0, 255.0, 38.0, 255.0, "AppContent/IconChat/PiecesOnly/box4.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 84.0, 82.0, 102.0, 82.0, 103.0, 99.0, 85.0, 99.0, "AppContent/IconChat/PiecesOnly/box5.png");
	polygon(256, 256, 0.5, 0.4, 1, 0.8, 64.0, 51.0, 184.0, 51.0, 185.0, 135.0, 107.0, 135.0, 108.0, 134.0, 83.0, 162.0, 80.0, 134.0, 80.0, 135.0, 63.0, 135.0, "AppContent/IconChat/PiecesOnly/box6.png");
	rhombus(256, 256, 0.01, 0.5, 0.99, 0.8, 115, 80, 132, 82, 137, 100, 117, 100, "AppContent/IconChat/PiecesOnly/box7.png");
}



