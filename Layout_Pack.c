/*
 * Layout_Pack.c
 *
 *  Created on: 15 Nov 2018
 *      Author: Jakub Tomczak
 */

#include "Layout_Pack.h"




  square str_dim_to_square(str_dim The_String)
{
	 square To_Create;

	 int current_width = 0;
	 int pic_size = The_String.width*The_String.length;

	 pixel *pix = malloc(sizeof(pixel)*pic_size);
	 To_Create.out_data = malloc((sizeof(char8)*pic_size)+1);
	 To_Create.out_data = The_String.out_data;

	 int i;
	for ( i = 0; i < pic_size;i++)
	{
		 if (((i%(The_String.width)) == 0) && (i != 0))
		 {
			 current_width++;
		 }
		 pix[i].y = current_width;
		 pix[i].x = i%(The_String.width);
	}
	To_Create.pixels = pix;

	 return To_Create;
}



 void init_Layout_Pack()
 {

construct_ASCII();
NORMAL20_ONE = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_TWO = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_THREE = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_FOUR = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_FIVE = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_SIX = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_SEVEN = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_NINE = str_dim_to_square(format_ASCII(ASCII_TWO));
NORMAL20_ZERO = str_dim_to_square(format_ASCII(ASCII_TWO));
}





