/*
 * Digital_Watch.h
 *
 *  Created on: 13 Nov 2018
 *      Author: Jakub Tomczak
 */

#ifndef SRC_ASCII_SCREEN_H_
#define SRC_ASCII_SCREEN_H_


#include <string.h>
#include "Layout_Pack.h"

/* MANUAL
 * 	- INIT SKÆRM OG OBJEKTER
 * 		1. Definer layout:  		screen_layoutpack_initialize();
 * 		2. Opret skærm:   			screen* scr = screen_initialize(int width_, int  height_);
 * 		3. Lav baggrundet:			screen_fill(scr,'[her skriver du character tegn]');'
 *
 * 	- LÆG OBJEKTER PÅ SKÆRM
 * 		4. Læg ny objekt.. f.eks et 3-ASCII i position 2,2:  		 screen_add_obj(NORMAL20_THREE,scr,set_coords(2,2));
 *
 * 	- OPDATÆR SKÆRM
 * 		5. Udskriv skærm på terminalen	 screen_print(scr);
 *
 *
 *
 *
 * 	/////////////////////////////ALLE NUVÆRNE OBJEKTER//////////////////////////////////
 *
 *
 * 	/// objekter i  7x11 str
 *
 *		square NORMAL20_ONE;
 *		square NORMAL20_TWO;
 *		square NORMAL20_THREE;
 *		square NORMAL20_FOUR;
 *		square NORMAL20_FIVE;
 *		square NORMAL20_SIX;
 *		square NORMAL20_SEVEN;
 *		square NORMAL20_EIGHT;
 *		square NORMAL20_NINE;
 *		square NORMAL20_ZERO;
 *
 *
 *
 *
 *
 *
 *
 */


//////////////////////////// SCREEN RELATED ////////

/// screen -- instance matrix of width and heiaht of char8 (ASCII)
typedef struct {

		int width;
		int height;
		int len;
		char8 *p;
}screen;

/// initialize matrix panel with width x height sizes
screen* screen_initialize(int width_, int  height_);

/// print the screen on cmd
void screen_print(screen* The_screen);



/////  PIXEL OPERATIONS //////////

// write pixel
pixel screen_coords(int x, int y);



////////////////////////// BASIC LAYOUT OBJECTS/////////////////////////////////

// initialize objects ( 1, 2, 3, 4, 5, 6, 7, 8, 9, 0)
void screen_layoutpack_initialize(void);

// add object  ( 1, 2, 3, 4, 5, 6, 7, 8, 9, 0)
void screen_add_obj(square to_add,screen* _Screen,pixel _start_pos);



/// TEST
void new_ob(pixel* shape, char8* text, screen* Screen,pixel start_pos);
void screen_fill(screen* The_screen,char character_background);



#endif /* SRC_ASCII_SCREEN_H_ */
