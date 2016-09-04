#include <cairo.h>
#include "../include.h"

shape rhombus(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, double verticeX4, double verticeY4, char img_name[50]) {

cairo_surface_t *surface =
	cairo_image_surface_create(CAIRO_FORMAT_ARGB32, img_width, img_height);
cairo_t *cr = cairo_create(surface);
cairo_set_source_rgba(cr, r, g, b, a);
cairo_line_to(cr, verticeX1, verticeY1);
cairo_line_to(cr, verticeX2, verticeY2);
cairo_line_to(cr, verticeX3, verticeY3);
cairo_line_to(cr, verticeX4, verticeY4);
cairo_close_path(cr);
cairo_fill_preserve(cr);
cairo_set_source_rgba(cr, r, g, b, a);
cairo_stroke(cr);
cairo_surface_write_to_png(surface, img_name);
cairo_destroy(cr);
cairo_surface_destroy(surface);

}

