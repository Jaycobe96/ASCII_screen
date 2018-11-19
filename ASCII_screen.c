/*
 * Digital_Watch.c
 *
 *  Created on: 13 Nov 2018
 *      Author: Jakub Tomczak
 */

#include "ASCII_screen.h"




// SCREEN RETURN-CONSCTUCTOR

 screen* screen_initialize(int width_, int  height_){

	screen* The_screen;

	The_screen = malloc(sizeof(screen));
	The_screen->width = width_;
	The_screen->height = height_;
	The_screen->len = height_ * width_;
	The_screen->p = malloc((sizeof(char8)*(The_screen->len))+1);
	return The_screen;

}

void screen_layoutpack_initialize(void)
{
	 init_Layout_Pack();
}




// FILL THE WHOLE SCREEN WITH A CHARACTER
void screen_fill(screen* The_screen,char character_background)
{
	 int i;
		 for(i = 0;i < ((The_screen->len));i++)
		 {

			 The_screen->p[i] = character_background;
		 }
}


// UPDATE THE WHOLE SCREEN
 void screen_print(screen* The_screen)
 {
	 int i;
	 for(i = 0;i <= ((The_screen->len));i++)
	 {

		 if ( i != The_screen-> len)
		 {

		 if ((i%(The_screen->width) == 0)&&(i != 0))
		 {
			 outbyte(0x0A);
			 outbyte(0x0D);
		 }

		 outbyte(The_screen->p[i]);
		 }

//		 else
	//	 {
		//	 outbyte(0x0A);
	//		 outbyte(0x0D);
//		 }

	 }
 }


// SET COORDINATIONS TO AN INSTANCE (OF PIXEL)

pixel screen_coords(int x, int y){

	pixel to_out;
	to_out.x = x;
	to_out.y = y;
	return to_out;

}



void screen_add_obj(square to_add,screen* _Screen,pixel _start_pos){

	pixel* pix = to_add.pixels;
	char8* out_dat = to_add.out_data;

	new_ob(pix,out_dat,_Screen,_start_pos);
}

void new_ob(pixel* shape, char8* text, screen* Screen,pixel start_pos){

	 int y_coord =  start_pos.y;
	 int x_coord =  start_pos.x;
	 int screen_width = Screen->width;;

	 int text_pointer;
	 int true_pos;
	 pixel current_coords;

	 for ( text_pointer = 0; text_pointer < strlen(text) ; text_pointer++ )
	 {
		 current_coords = shape[text_pointer];

		  true_pos = (((screen_width*(current_coords.y+1)) - screen_width)
						+((screen_width*(y_coord+1)) - screen_width)) + current_coords.x + x_coord;


		 Screen->p[true_pos] =  text[text_pointer];


		 /// debug char batches



	 }




}



// CREATE A DIGIT OBJECT AND PLACE ON SCREEN

