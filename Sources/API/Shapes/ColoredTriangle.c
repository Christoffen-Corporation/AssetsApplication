/* The Christoffen Assets Application
 * (c) M. Gage Morgan et. al. on 6/8/2016 
 *
 * Version 2.0.1
 *
 * This file includes the definition in whole
 * of the function colored_triangles() used
 * in options.c
 */
#include <cairo.h>
#include "../Logos.h"

triangle ColoredTriangle(int const LOGO_WIDTH, 
                     int const LOGO_HEIGHT, 
                     double r, 
                     double g, 
                     double b, 
                     double a, 
                     double r2, 
                     double g2, 
                     double b2, 
                     double a2, 
                     double verticeX1, 
                     double verticeY1, 
                     double verticeX2, 
                     double verticeY2, 
                     double verticeX3, 
                     double verticeY3, 
                     char img_name[50]) {

cairo_surface_t *surface =	
cairo_image_surface_create(CAIRO_FORMAT_ARGB32, LOGO_WIDTH, LOGO_HEIGHT);
cairo_t *cr = cairo_create(surface);
cairo_set_source_rgba(cr, r, g, b, a);
cairo_line_to(cr, verticeX1, verticeY1);
cairo_line_to(cr, verticeX2, verticeY2);
cairo_line_to(cr, verticeX3, verticeY3);
cairo_close_path(cr);
cairo_fill_preserve(cr);
cairo_set_source_rgba(cr, r2, g2, b2, a2);
cairo_stroke(cr);
cairo_surface_write_to_png(surface, img_name);
cairo_destroy(cr);
cairo_surface_destroy(surface);

}

