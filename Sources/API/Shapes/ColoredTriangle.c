/* The Christoffen Corporation Logo Generator
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * This file includes the definition in whole
 * of the function colored_triangles() used
 * in options.c
 */
#include <cairo.h>
#include "../include.h"

/*
 * The function declared with variables, 
 * explained below
 */
void ColoredTriangle(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, char img_name[50]) {

cairo_surface_t *surface =
	/*
	 * The variables img_ width and img_height are
	 * first passed from the function parameter list
	 * to right here. They are self-explanatory.
	 */
	cairo_image_surface_create(CAIRO_FORMAT_ARGB32, img_width, img_height);
cairo_t *cr = cairo_create(surface);

/* 
 * The variables r, g, b, and a are of type double
 * and are for the color of each triangle. The
 * decimals passed through the list of parameters
 * specifically at this point are taken as the color
 * of the triangle outputted.
 *
 * r = red
 * b = blue
 * g = green
 * a = alpha
 *
 * The alpha is what makes the triangles appear to be
 * transparent.
 */
cairo_set_source_rgba(cr, r, g, b, a);

/*
 * verticeX1 and verticeY1 are the coordinates
 * that define the first point on the imaginary
 * grid cairo thinks of when drawing the triangle
 * based on img_width and img_height input given
 * previously.
 */
cairo_line_to(cr, verticeX1, verticeY1);

/* 
 * verticeX2 and verticeY2 are the same definintion
 * as verticeX1 and verticeY1, just the second point
 */
cairo_line_to(cr, verticeX2, verticeY2);

/* 
 * verticeX3 and verticeY3 are the same definintion
 * as verticeX1 and verticeY1, just the third point.
 */
cairo_line_to(cr, verticeX3, verticeY3);
cairo_close_path(cr);
cairo_fill_preserve(cr);

/*
 * See above comment for vars r, g, b, and a.
 */
cairo_set_source_rgba(cr, r, g, b, a);
cairo_stroke(cr);

/* 
 * img_name is a character array of up to 50 characters 
 * in a string. This input will cause the colored 
 * triangle outputted by this function to be the name
 * of the resulting image.
 */
cairo_surface_write_to_png(surface, img_name);
cairo_destroy(cr);
cairo_surface_destroy(surface);

}

