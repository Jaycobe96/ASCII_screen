/*
 * pixel.h
 *
 *  Created on: 15 Nov 2018
 *      Author: Jakub Tomczak
 */

#ifndef SRC_PIXEL_H_
#define SRC_PIXEL_H_

#import <xil_printf.h>

typedef struct {

	int x;
	int y;

}pixel;



typedef struct{

	char8* out_data;
	pixel *pixels;


}square;


typedef struct{

	 char8* out_data;
	 int width;
	 int length;


}str_dim;


#endif /* SRC_PIXEL_H_ */
