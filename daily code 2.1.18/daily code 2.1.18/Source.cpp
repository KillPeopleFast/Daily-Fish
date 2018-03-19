#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;

float arr[] = { 550, 423, 212, 127, 892 };
float points[] = { 200, 250, 500, 355, 650, 272, 900, 725 };
int vertex_counts[] = { 5, 22, 0 };
int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = NULL;

	al_create_display(1000, 1000);

	al_draw_polygon(arr, 5, 20, al_map_rgb(47, 128, 25), 10, 50);
	al_draw_pieslice(450, 200, 100, 200, 900, al_map_rgb(90, 129, 78), 20);
	al_draw_spline(points, al_map_rgb(15, 32, 130), 25);
	al_draw_ribbon(points, 125, al_map_rgb(63, 45, 78), 10, 25);
	al_draw_filled_polygon_with_holes(arr, vertex_counts, al_map_rgb(128, 0, 0));

	al_flip_display();
	al_rest(100);
}