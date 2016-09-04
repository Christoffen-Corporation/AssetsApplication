#include <cairo.h>
#include "../include.h"

smash JoinTriangles(char tri_one[50], char tri_two[50], char tri_three[50], char tri_four[50], char tri_five[50], char tri_six[50], char tri_seven[50], char img_name[50]) {
cairo_surface_t *surface = 
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 421, 410); 
        cairo_t *cr = 
            cairo_create (surface); 

	cairo_surface_t *one;
	cairo_surface_t *two;
	cairo_surface_t *three;
	cairo_surface_t *four;
	cairo_surface_t *five;
	cairo_surface_t *six;
	cairo_surface_t *seven;

	cairo_push_group (cr); 
	one = cairo_image_surface_create_from_png (tri_one); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	two = cairo_image_surface_create_from_png (tri_two); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	three = cairo_image_surface_create_from_png (tri_three); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	four = cairo_image_surface_create_from_png (tri_four); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	five = cairo_image_surface_create_from_png (tri_five); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	six = cairo_image_surface_create_from_png (tri_six); 
	cairo_pop_group_to_source (cr); 
	cairo_push_group (cr); 
	seven = cairo_image_surface_create_from_png (tri_seven); 
	cairo_pop_group_to_source (cr); 

	cairo_set_source_surface (cr, one, 0, 0); 
	cairo_paint (cr); 
	cairo_set_source_surface (cr, two, 0, 0); 
	cairo_paint (cr); 
	cairo_set_source_surface (cr, three, 0, 0); 
	cairo_paint (cr); 
	cairo_set_source_surface (cr, four, 0, 0); 
	cairo_paint (cr); 
	cairo_set_source_surface (cr, five, 0, 0); 
	cairo_paint (cr); 
	cairo_set_source_surface (cr, six, 0, 0);
	cairo_paint (cr); 
	cairo_set_source_surface (cr, seven, 0, 0); 
	cairo_paint (cr); 

	cairo_surface_destroy (one); 
	cairo_surface_destroy (two); 
	cairo_surface_destroy (three);
	cairo_surface_destroy (four); 
	cairo_surface_destroy (five); 
	cairo_surface_destroy (six); 
	cairo_surface_destroy (seven); 
        cairo_surface_write_to_png (surface, img_name); 
        cairo_destroy (cr); 
        cairo_surface_destroy (surface); 
	return 0;
}

