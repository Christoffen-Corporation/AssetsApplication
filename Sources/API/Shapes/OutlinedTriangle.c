#include <cairo.h>
#include "../Logos.h"

triangle OutlinedTriangle(int const LOGO_WIDTH, int const LOGO_HEIGHT, double scaleX1, double scaleY1, double lineX1, double lineY1, double lineX2, double lineY2, double lineX3, double lineY3, double finishX1, double finishY1, char img_name[50]) {
        cairo_surface_t *surface = 
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, LOGO_WIDTH, LOGO_HEIGHT); 
        cairo_t *cr = 
            cairo_create (surface); 

	cairo_scale (cr, scaleX1, scaleY1); 
	cairo_move_to(cr, finishX1, finishY1);
	cairo_line_to (cr, lineX1, lineY1); 
	cairo_line_to (cr, lineX2, lineY2); 
	cairo_line_to (cr, lineX3, lineY3); 
	cairo_close_path (cr);
	cairo_set_line_width (cr, 0.1);	
	cairo_stroke (cr); 	

        cairo_surface_write_to_png (surface, img_name); 
        cairo_destroy (cr); 
        cairo_surface_destroy (surface); 
}


