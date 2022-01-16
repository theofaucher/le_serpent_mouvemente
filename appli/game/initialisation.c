/*
 * initialisation.c
 *
 *  Created on: 19 déc. 2021
 *      Author: theof
 */

#include <game/initialisation.h>
#include "matrix_led_32_32.h"

//vector_t wallCreation(void){
//	vector_t wall = newVector(190);
//	for(uint8_t index = 0; index < 32; index++) addPixelToVector(&wall, newPixel(0, index, COLOR_GREEN));
//	for(uint8_t index = 0; index < 32; index++) addPixelToVector(&wall, newPixel(index, 0, COLOR_GREEN));
//
//	for(uint8_t index = 0; index < 32; index++) addPixelToVector(&wall, newPixel(index, 31, COLOR_GREEN));
//	for(uint8_t index = 0; index < 32; index++) addPixelToVector(&wall, newPixel(31, index, COLOR_GREEN));
//
//	return wall;
//}

void wallCreation(vector_t *wall){
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(0, index, COLOR_GREEN));
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(index, 0, COLOR_GREEN));

	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(index, 31, COLOR_GREEN));
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(31, index, COLOR_GREEN));
}

vector_t logoInitialisation(void){
	vector_t logo = newVector(350);

	addPixelToVector(&logo, newPixel(4, 3, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(3, 4, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(2, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 13, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(3, 12, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(2, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(5, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(5, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(5, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 11, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(9, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(10, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(11, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(14, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(14, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(14, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(19, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(22, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(21, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(20, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(21, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(22, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(24, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(24, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(24, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 8, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(28, 4, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(29, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(28, 12, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(29, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 10, COLOR_WHITE));

	for(uint8_t index = 5; index < 28; index++){
		addPixelToVector(&logo, newPixel(index, 3, COLOR_WHITE));
		addPixelToVector(&logo, newPixel(index, 13, COLOR_WHITE));
	}

	for(uint8_t index = 4; index < 28; index++){
		addPixelToVector(&logo, newPixel(index, 4, COLOR_RED));
		addPixelToVector(&logo, newPixel(index, 12, COLOR_RED));
	}

	for(uint8_t index = 8; index < 29; index++) addPixelToVector(&logo, newPixel(index, 5, COLOR_RED));
	for(uint8_t index = 7; index < 29; index++) addPixelToVector(&logo, newPixel(index, 11, COLOR_RED));

	for(uint8_t index = 6; index < 11; index++) {
		 addPixelToVector(&logo, newPixel(2, index, COLOR_RED));
		 addPixelToVector(&logo, newPixel(29, index, COLOR_RED));
	}

	for(uint8_t index = 5; index < 12; index++){
		addPixelToVector(&logo, newPixel(3, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(28, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(&logo, newPixel(8, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(13, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(&logo, newPixel(18, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(23, index, COLOR_RED));
	}

	addPixelToVector(&logo, newPixel(7, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(7, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(7, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 5, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 10, COLOR_RED));

	addPixelToVector(&logo, newPixel(12, 6, COLOR_RED));
	for(uint8_t index = 7; index < 11; index++){
		addPixelToVector(&logo, newPixel(10, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(11, index, COLOR_RED));
	}

	addPixelToVector(&logo, newPixel(17, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(14, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(15, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(16, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(14, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(15, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(16, 7, COLOR_RED));

	addPixelToVector(&logo, newPixel(21, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(21, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(21, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 9, COLOR_RED));

	addPixelToVector(&logo, newPixel(24, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(27, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(25, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(26, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(25, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(26, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(27, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(24, 10, COLOR_RED));


	return logo;
}
