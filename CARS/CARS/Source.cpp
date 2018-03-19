#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
int main() {
	ALLEGRO_BITMAP *face = NULL;
	ALLEGRO_DISPLAY *display = NULL;
	
	al_init();
	al_init_image_addon();
	display = al_create_display(500, 400);
	al_init_primitives_addon();

	face = al_load_bitmap("prime.png");
	al_convert_mask_to_alpha(face, al_map_rgb(255, 0, 255));
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_rectangle(30, 30, 359, 200, al_map_rgb(0, 0, 100));
	al_draw_filled_rectangle(0, 200, 200, 200, al_map_rgb(0, 0, 100));
	al_draw_filled_circle(250, 200, 50, al_map_rgb(210, 105, 30));
	al_draw_filled_circle(50, 200, 50, al_map_rgb(210, 105, 30));
	al_draw_filled_circle(150, 200, 50, al_map_rgb(210, 105, 30));
	al_draw_filled_circle(350, 200, 50, al_map_rgb(210, 105, 30));

	al_flip_display();
	al_rest(20.0);
}
//HIIIIIIIIIIIIIIIIIII