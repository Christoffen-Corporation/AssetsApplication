/* The Christoffen Assets Application
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * The options seen in the CLI are found here.
 * The role each individual function plays will be 
 * described below. The numbers that make up the logo
 * for the most part are described in this file.
 */
#include <cairo.h>
#include "../API/Logos.h"
#define LOGO_WIDTH 421 
#define LOGO_HEIGHT 410

logo AllImages() {
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         2.3, 28.1, 
                         14.3, 3.0, 
                         19.8, 17.6, 
                          2.3, 28.1, 
                         "AppContent/Logo/All/triangle1-outline.png");
	
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         10.0, 11.8, 
                         27.5, 4.4, 
                         37.7, 10.2, 
                         10.0, 11.8, 
                         "AppContent/Logo/All/triangle2-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         30.5, 2.6, 
                         36.3, 19.0, 
                         25.0, 12.6, 
                         30.5, 2.6, 
                         "AppContent/Logo/All/triangle3-outline.png");
	
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         29.0, 14.7, 
                         37.6, 13.0, 
                         30.4, 22.2, 
                         29.0, 14.7, 
                         "AppContent/Logo/All/triangle4-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         7.0, 18.4,
                         24.4, 31.4,
                         14.8, 37.5, 
                         7.0, 18.4, 
                         "AppContent/Logo/All/triangle5-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         12.8, 33.0, 
                         19.5, 26.0, 
                         33.3, 35.6, 
                         12.8, 33.0,
                         "AppContent/Logo/All/triangle6-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10,
                         25.2, 32.6,
                         30.4, 27.0,
                         31.1, 38.0, 
                         25.2, 32.6,
                         "AppContent/Logo/All/triangle7-outline.png");
	
	JoinTriangles("AppContent/Logo/All/triangle1-outline.png",
                      "AppContent/Logo/All/triangle2-outline.png", 
                      "AppContent/Logo/All/triangle3-outline.png", 
                      "AppContent/Logo/All/triangle4-outline.png", 
                      "AppContent/Logo/All/triangle5-outline.png", 
                      "AppContent/Logo/All/triangle6-outline.png", 
                      "AppContent/Logo/All/triangle7-outline.png", 
                      "AppContent/Logo/All/crstfn-outline.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0.7, 0.20, 0.17, 0.8, 0.98, 0.38, 0.09, 0.8,
                        143, 30, 
                        198, 176, 
                        23, 281,
                        "AppContent/Logo/All/triangle1-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        275, 44,
                        377, 102,
                        100, 118, 
                        "AppContent/Logo/All/triangle2-color.png");
 
	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        363, 190,
                        250, 126, 
                        305, 26,
                        "AppContent/Logo/All/triangle3-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        376, 130, 
                        304, 222,
                        290, 147,
                       "AppContent/Logo/All/triangle4-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        244, 314,
                        148, 375,
                        70, 184,
                        "AppContent/Logo/All/triangle5-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        195, 260, 
                        333, 356, 
                        128, 330,
                        "AppContent/Logo/All/triangle6-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        304, 270,
                        311, 380,
                        252, 326,
                        "AppContent/Logo/All/triangle7-color.png");

	JoinTriangles("AppContent/Logo/All/triangle1-color.png", 
                      "AppContent/Logo/All/triangle2-color.png", 
                      "AppContent/Logo/All/triangle3-color.png", 
                      "AppContent/Logo/All/triangle4-color.png", 
                      "AppContent/Logo/All/triangle5-color.png", 
                      "AppContent/Logo/All/triangle6-color.png", 
                      "AppContent/Logo/All/triangle7-color.png", 
                      "AppContent/Logo/All/crstfn-color.png");
}

/*
 * This function is called when you run the command
 * "logo-generator -O" in the CLI. The output is just 
 * the seven individual triangles without the logo.
 */
logo OutlinedNoLogo() {
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         2.3, 28.1, 
                         14.3, 3.0, 
                         19.8, 17.6, 
                         2.3, 28.1, 
                         "AppContent/Logo/OutlinedNoLogo/triangle1-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         10.0, 11.8, 
                         27.5, 4.4, 
                         37.7, 10.2, 
                         10.0, 11.8, 
                         "AppContent/Logo/OutlinedNoLogo/triangle2-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10, 
                         30.5, 2.6, 
                         36.3, 19.0,
                         25.0, 12.6,
                         30.5, 2.6,
                         "AppContent/Logo/OutlinedNoLogo/triangle3-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         29.0, 14.7, 
                         37.6, 13.0, 
                         30.4, 22.2, 
                         29.0, 14.7, 
                         "AppContent/Logo/OutlinedNoLogo/triangle4-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         7.0, 18.4, 
                         24.4, 31.4, 
                         14.8, 37.5, 
                         7.0, 18.4, 
                         "AppContent/Logo/OutlinedNoLogo/triangle5-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         12.8, 33.0, 
                         19.5, 26.0, 
                         33.3, 35.6, 
                         12.8, 33.0, 
                         "AppContent/Logo/OutlinedNoLogo/triangle6-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         25.2, 32.6,
                         30.4, 27.0,
                         31.1, 38.0,
                         25.2, 32.6,
                         "AppContent/Logo/OutlinedNoLogo/triangle7-outline.png");
}

/*
 * The same as above WITH the actual logo
 */
logo OutlinedAll() {
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         2.3, 28.1, 
                         14.3, 3.0, 
                         19.8, 17.6, 
                         2.3, 28.1,
                         "AppContent/Logo/OutlinedAll/triangle1-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         10.0, 11.8, 
                         27.5, 4.4, 
                         37.7, 10.2, 
                         10.0, 11.8, 
                         "AppContent/Logo/OutlinedAll/triangle2-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         30.5, 2.6,
                         36.3, 19.0, 
                         25.0, 12.6, 
                         30.5, 2.6, 
                         "AppContent/Logo/OutlinedAll/triangle3-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         29.0, 14.7, 
                         37.6, 13.0, 
                         30.4, 22.2, 
                         29.0, 14.7, 
                         "AppContent/Logo/OutlinedAll/triangle4-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         7.0, 18.4, 
                         24.4, 31.4, 
                         14.8, 37.5, 
                         7.0, 18.4, 
                         "AppContent/Logo/OutlinedAll/triangle5-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         12.8, 33.0, 
                         19.5, 26.0, 
                         33.3, 35.6, 
                         12.8, 33.0, 
                         "AppContent/Logo/OutlinedAll/triangle6-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         25.2, 32.6, 
                         30.4, 27.0, 
                         31.1, 38.0, 
                         25.2, 32.6, 
                         "AppContent/Logo/OutlinedAll/triangle7-outline.png");

	JoinTriangles("AppContent/Logo/OutlinedAll/triangle1-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle2-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle3-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle4-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle5-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle6-outline.png", 
                      "AppContent/Logo/OutlinedAll/triangle7-outline.png", 
                      "AppContent/Logo/OutlinedAll/crstfn-outline.png");
}

/*
 * The same as outlined_nologo(), but with 
 * a bit more color.
 */
logo ColoredNoLogo() {
	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.7, 0.20, 0.17, 0.8, 0.98, 0.38, 0.09, 0.8,
                        143, 30,
                        198, 176,
                        23, 281, 
                        "AppContent/Logo/ColoredNoLogo/triangle1-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        275, 44,
                        377, 102,
                        100, 118,
                        "AppContent/Logo/ColoredNoLogo/triangle2-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        363, 190,
                        250, 126,
                        305, 26,
                        "AppContent/Logo/ColoredNoLogo/triangle3-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        376, 130,
                        304, 222,
                        290, 147,
                        "AppContent/Logo/ColoredNoLogo/triangle4-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        244, 314,
                        148, 375,
                        70, 184,
                        "AppContent/Logo/ColoredNoLogo/triangle5-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        195, 260,
                        333, 356, 
                        128, 330, 
                        "AppContent/Logo/ColoredNoLogo/triangle6-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        304, 270, 
                        311, 380,
                        252, 326,
                        "AppContent/Logo/ColoredNoLogo/triangle7-color.png");
}

/*
 * The same as outlined_all(), just with 
 * more color.
 */
logo ColoredAll() {
	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0.7, 0.20, 0.17, 0.8, 0.98, 0.38, 0.09, 0.8,
                        143, 30,
                        198, 176,
                        23, 281,
                        "AppContent/Logo/AllColors/triangle1-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        275, 44,
                        377, 102, 
                        100, 118, 
                        "AppContent/Logo/AllColors/triangle2-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        363, 190,
                        250, 126,
                        305, 26, 
                        "AppContent/Logo/AllColors/triangle3-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        376, 130,
                        304, 222,
                        290, 147,
                        "AppContent/Logo/AllColors/triangle4-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        244, 314, 
                        148, 375,
                        70, 184,
                        "AppContent/Logo/AllColors/triangle5-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        195, 260,
                        333, 356,
                        128, 330,
                        "AppContent/Logo/AllColors/triangle6-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        304, 270,
                        311, 380,
                        252, 326,
                        "AppContent/Logo/AllColors/triangle7-color.png");

	JoinTriangles("AppContent/Logo/AllColors/triangle1-color.png", 
                      "AppContent/Logo/AllColors/triangle2-color.png", 
                      "AppContent/Logo/AllColors/triangle3-color.png", 
                      "AppContent/Logo/AllColors/triangle4-color.png", 
                      "AppContent/Logo/AllColors/triangle5-color.png", 
                      "AppContent/Logo/AllColors/triangle6-color.png", 
                      "AppContent/Logo/AllColors/triangle7-color.png", 
                      "AppContent/Logo/AllColors/crstfn-color.png");
}

/*
 * Generates two hybrids representing use of the 
 * "JoinTriangles()" function. See README.md for
 * more information about why this even exists 
 * in the first place.
 */
logo Frankenlogos() {
	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         2.3, 28.1, 
                         14.3, 3.0,
                         19.8, 17.6, 
                         2.3, 28.1, 
                         "AppContent/Logo/Frankenlogos/triangle1-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                         10, 10, 
                         10.0, 11.8, 
                         27.5, 4.4, 
                         37.7, 10.2, 
                         10.0, 11.8,
                         "AppContent/Logo/Frankenlogos/triangle2-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10,
                         30.5, 2.6,
                         36.3, 19.0,
                         25.0, 12.6,
                         30.5, 2.6,
                         "AppContent/Logo/Frankenlogos/triangle3-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10, 
                         29.0, 14.7, 
                         37.6, 13.0, 
                         30.4, 22.2,
                         29.0, 14.7, 
                         "AppContent/Logo/Frankenlogos/triangle4-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10,
                         7.0, 18.4,
                         24.4, 31.4, 
                         14.8, 37.5, 
                         7.0, 18.4, 
                         "AppContent/Logo/Frankenlogos/triangle5-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10,
                         12.8, 33.0,
                         19.5, 26.0,
                         33.3, 35.6,
                         12.8, 33.0,
                         "AppContent/Logo/Frankenlogos/triangle6-outline.png");

	OutlinedTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                         10, 10,
                         25.2, 32.6,
                         30.4, 27.0,
                         31.1, 38.0,
                         25.2, 32.6,
                         "AppContent/Logo/Frankenlogos/triangle7-outline.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.7, 0.20, 0.17, 0.8, 0.98, 0.38, 0.09, 0.8,
                        143, 30,
                        198, 176,
                        23, 281,
                        "AppContent/Logo/Frankenlogos/triangle1-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        275, 44,
                        377, 102, 
                        100, 118,
                        "AppContent/Logo/Frankenlogos/triangle2-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        363, 190,
                        250, 126,
                        305, 26,
                        "AppContent/Logo/Frankenlogos/triangle3-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        376, 130,
                        304, 222,
                        290, 147,
                        "AppContent/Logo/Frankenlogos/triangle4-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0, 0.63, 0.90, 0.8, 0, 0.99, 0.93, 0.8,
                        244, 314, 
                        148, 375,
                        70, 184,
                        "AppContent/Logo/Frankenlogos/triangle5-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT, 
                        0.78, 0.38, 0.09, 0.8, 0.98, 0.20, 0.17, 0.8,
                        195, 260,
                        333, 356,
                        128, 330,
                        "AppContent/Logo/Frankenlogos/triangle6-color.png");

	ColoredTriangle(LOGO_WIDTH, LOGO_HEIGHT,
                        0, 0.79, 0.83, 0.8, 0, 0.63, 1, 0.8,
                        304, 270,
                        311, 380,
                        252, 326,
                        "AppContent/Logo/Frankenlogos/triangle7-color.png");

	JoinTriangles("AppContent/Logo/Frankenlogos/triangle1-color.png",
                      "AppContent/Logo/Frankenlogos/triangle2-outline.png",
                      "AppContent/Logo/Frankenlogos/triangle3-color.png",
                      "AppContent/Logo/Frankenlogos/triangle4-outline.png",
                      "AppContent/Logo/Frankenlogos/triangle5-color.png",
                      "AppContent/Logo/Frankenlogos/triangle6-outline.png",
                      "AppContent/Logo/Frankenlogos/triangle7-color.png", 
                      "AppContent/Logo/Frankenlogos/crstfn-hybrid1.png");
	
	JoinTriangles("AppContent/Logo/Frankenlogos/triangle1-outline.png",
                      "AppContent/Logo/Frankenlogos/triangle2-color.png", 
                      "AppContent/Logo/Frankenlogos/triangle3-outline.png",
                      "AppContent/Logo/Frankenlogos/triangle4-color.png",
                      "AppContent/Logo/Frankenlogos/triangle5-outline.png", 
                      "AppContent/Logo/Frankenlogos/triangle6-color.png",
                      "AppContent/Logo/Frankenlogos/triangle7-outline.png",
                      "AppContent/Logo/Frankenlogos/crstfn-hybrid2.png");
}





























