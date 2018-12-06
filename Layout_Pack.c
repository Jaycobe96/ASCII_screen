/*
 * Layout_Pack.c
 *
 *  Created on: 15 Nov 2018
 *      Author: Jakub Tomczak
 */

#include "Layout_Pack.h"





 square* str_dim_to_square(str_dim The_String)
{
	 square To_Create;

	 int current_width = 0;
	 ///int pic_size = (The_String.width)*(The_String.length);

	/// pixel *pix = malloc(sizeof(pixel)*pic_size);
	 To_Create.pixels = malloc(sizeof(pixel)*(The_String.width*The_String.length));

	 To_Create.out_data = malloc((sizeof(char8)*(The_String.width*The_String.length))+1);
	 To_Create.out_data = The_String.out_data;

	 int i;
	for ( i = 0; i < (The_String.width*The_String.length);i++)
	{
		 if (((i%(The_String.width)) == 0) && (i != 0))
		 {
			 current_width++;
		 }
		 To_Create.pixels[i].y = current_width;
		 To_Create.pixels[i].x = i%(The_String.width);
	}

	square *to_out = malloc(sizeof(square));
	 *to_out = To_Create;



	 return to_out;


 }



  void init_Layout_Pack(void)
 {
construct_ASCII();
 }

square* extract(str_dim flat)
{
	return str_dim_to_square(format_ASCII(flat));
}






