/*
 * animations	.c
 *
 *  Created on: 19 déc. 2021
 *      Author: theof
 */

#include <game/animation.h>
#include "../matrix/matrix.h"
#include "matrix_led_32_32.h"

void wallCreation(vector_t *wall){
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(0, index, COLOR_GREEN));
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(index, 0, COLOR_GREEN));

	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(index, 31, COLOR_GREEN));
	for(uint8_t index = 0; index < 32; index++) addPixelToVector(wall, newPixel(31, index, COLOR_GREEN));
}

void logoInitialisation(vector_t *logo, uint32_t wr){

	addPixelToVector(logo, newPixel(4, 3, COLOR_WHITE));
	addPixelToVector(logo, newPixel(3, 4, COLOR_WHITE));
	addPixelToVector(logo, newPixel(2, 5, COLOR_WHITE));
	addPixelToVector(logo, newPixel(1, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(1, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(1, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(1, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(4, 13, COLOR_WHITE));
	addPixelToVector(logo, newPixel(3, 12, COLOR_WHITE));
	addPixelToVector(logo, newPixel(2, 11, COLOR_WHITE));
	addPixelToVector(logo, newPixel(1, 10, COLOR_WHITE));

	addPixelToVector(logo, newPixel(5, 5, COLOR_WHITE));
	addPixelToVector(logo, newPixel(6, 5, COLOR_WHITE));
	addPixelToVector(logo, newPixel(7, 5, COLOR_WHITE));
	addPixelToVector(logo, newPixel(4, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(4, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(5, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(6, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(7, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(7, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(4, 11, COLOR_WHITE));
	addPixelToVector(logo, newPixel(5, 11, COLOR_WHITE));
	addPixelToVector(logo, newPixel(6, 11, COLOR_WHITE));

	addPixelToVector(logo, newPixel(9, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(9, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(9, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(9, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(9, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(10, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(11, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(12, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(12, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(12, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(12, 10, COLOR_WHITE));

	addPixelToVector(logo, newPixel(14, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(14, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(14, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(15, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(16, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(17, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(17, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(17, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(17, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(15, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(16, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(16, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(15, 10, COLOR_WHITE));

	addPixelToVector(logo, newPixel(19, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(19, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(19, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(19, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(19, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(22, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(21, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(20, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(21, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(22, 10, COLOR_WHITE));

	addPixelToVector(logo, newPixel(24, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(24, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(24, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(25, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(26, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(27, 10, COLOR_WHITE));
	addPixelToVector(logo, newPixel(25, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(26, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(27, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(27, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(25, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(26, 8, COLOR_WHITE));

	addPixelToVector(logo, newPixel(28, 4, COLOR_WHITE));
	addPixelToVector(logo, newPixel(29, 5, COLOR_WHITE));
	addPixelToVector(logo, newPixel(30, 6, COLOR_WHITE));
	addPixelToVector(logo, newPixel(30, 7, COLOR_WHITE));
	addPixelToVector(logo, newPixel(30, 8, COLOR_WHITE));
	addPixelToVector(logo, newPixel(30, 9, COLOR_WHITE));
	addPixelToVector(logo, newPixel(28, 12, COLOR_WHITE));
	addPixelToVector(logo, newPixel(29, 11, COLOR_WHITE));
	addPixelToVector(logo, newPixel(30, 10, COLOR_WHITE));

	for(uint8_t index = 5; index < 28; index++){
		addPixelToVector(logo, newPixel(index, 3, COLOR_WHITE));
		addPixelToVector(logo, newPixel(index, 13, COLOR_WHITE));
	}

	for(uint8_t index = 4; index < 28; index++){
		addPixelToVector(logo, newPixel(index, 4, COLOR_RED));
		addPixelToVector(logo, newPixel(index, 12, COLOR_RED));
	}

	for(uint8_t index = 8; index < 29; index++) addPixelToVector(logo, newPixel(index, 5, COLOR_RED));
	for(uint8_t index = 7; index < 29; index++) addPixelToVector(logo, newPixel(index, 11, COLOR_RED));

	for(uint8_t index = 6; index < 11; index++) {
		 addPixelToVector(logo, newPixel(2, index, COLOR_RED));
		 addPixelToVector(logo, newPixel(29, index, COLOR_RED));
	}

	for(uint8_t index = 5; index < 12; index++){
		addPixelToVector(logo, newPixel(3, index, COLOR_RED));
		addPixelToVector(logo, newPixel(28, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(logo, newPixel(8, index, COLOR_RED));
		addPixelToVector(logo, newPixel(13, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(logo, newPixel(18, index, COLOR_RED));
		addPixelToVector(logo, newPixel(23, index, COLOR_RED));
	}

	addPixelToVector(logo, newPixel(7, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(7, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(7, 8, COLOR_RED));
	addPixelToVector(logo, newPixel(6, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(6, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(5, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(5, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(6, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(6, 10, COLOR_RED));
	addPixelToVector(logo, newPixel(5, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(5, 10, COLOR_RED));
	addPixelToVector(logo, newPixel(4, 5, COLOR_RED));
	addPixelToVector(logo, newPixel(4, 8, COLOR_RED));
	addPixelToVector(logo, newPixel(4, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(4, 10, COLOR_RED));

	addPixelToVector(logo, newPixel(12, 6, COLOR_RED));
	for(uint8_t index = 7; index < 11; index++){
		addPixelToVector(logo, newPixel(10, index, COLOR_RED));
		addPixelToVector(logo, newPixel(11, index, COLOR_RED));
	}

	addPixelToVector(logo, newPixel(17, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(14, 10, COLOR_RED));
	addPixelToVector(logo, newPixel(15, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(16, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(14, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(15, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(16, 7, COLOR_RED));

	addPixelToVector(logo, newPixel(21, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(20, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(20, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(20, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(20, 10, COLOR_RED));
	addPixelToVector(logo, newPixel(21, 10, COLOR_RED));
	addPixelToVector(logo, newPixel(21, 8, COLOR_RED));
	addPixelToVector(logo, newPixel(22, 8, COLOR_RED));
	addPixelToVector(logo, newPixel(22, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(22, 9, COLOR_RED));

	addPixelToVector(logo, newPixel(24, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(27, 6, COLOR_RED));
	addPixelToVector(logo, newPixel(25, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(26, 7, COLOR_RED));
	addPixelToVector(logo, newPixel(25, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(26, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(27, 9, COLOR_RED));
	addPixelToVector(logo, newPixel(24, 10, COLOR_RED));

	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(logo, newPixel(2, index, COLOR_RED));
		addPixelToVector(logo, newPixel(6, index, COLOR_RED));
	}

	addPixelToVector(logo, newPixel(3, 27, COLOR_RED));
	addPixelToVector(logo, newPixel(4, 26, COLOR_RED));
	addPixelToVector(logo, newPixel(5, 27, COLOR_RED));

	for(uint8_t index = 17; index < 29 ; index++) addPixelToVector(logo, newPixel(8, index, COLOR_RED));
	for(uint8_t index = 17; index < 22 ; index++) addPixelToVector(logo, newPixel(11, index, COLOR_RED));
	for(uint8_t index = 25; index < 29 ; index++) addPixelToVector(logo, newPixel(11, index, COLOR_RED));

	addPixelToVector(logo, newPixel(9, 17, COLOR_RED));
	addPixelToVector(logo, newPixel(9, 21, COLOR_RED));
	addPixelToVector(logo, newPixel(9, 22, COLOR_RED));
	addPixelToVector(logo, newPixel(10, 17, COLOR_RED));
	addPixelToVector(logo, newPixel(10, 21, COLOR_RED));
	addPixelToVector(logo, newPixel(10, 23, COLOR_RED));
	addPixelToVector(logo, newPixel(10, 24, COLOR_RED));

	 if(wr < 10){
	        	if(wr == 0) addZeroWR(logo, 5, 0);
	        	if(wr == 1) addOneWR(logo, 5, 0);
	        	if(wr == 2) addTwoWR(logo, 5, 0);
	        	if(wr == 3) addThreeWR(logo, 5, 0);
	        	if(wr == 4) addFourWR(logo, 5, 0);
	        	if(wr == 5) addFiveWR(logo, 5, 0);
	        	if(wr == 6) addSixWR(logo, 5, 0);
	        	if(wr == 7) addSevenWR(logo, 5, 0);
	        	if(wr == 8) addEightWR(logo, 5, 0);
	        	if(wr == 9) addNineWR(logo, 9, 0);
	        }

			if(wr > 9){

				uint8_t yes = (wr/10);
				uint8_t yes2 = (wr%10);

				if(yes == 0) addZeroWR(logo, 0, 0);
				if(yes == 1) addOneWR(logo, 0, 0);
				if(yes == 2) addTwoWR(logo, 0, 0);
				if(yes == 3) addThreeWR(logo, 0, 0);
				if(yes == 4) addFourWR(logo, 0, 0);
				if(yes == 5) addFiveWR(logo, 0, 0);
				if(yes == 6) addSixWR(logo, 0, 0);
				if(yes == 7) addSevenWR(logo, 0, 0);
				if(yes == 8) addEightWR(logo, 0, 0);
				if(yes == 9) addNineWR(logo, 0, 0);

				if(yes2 == 0) addZeroWR(logo, 5, 0);
				if(yes2 == 1) addOneWR(logo, 5, 0);
				if(yes2 == 2) addTwoWR(logo, 5, 0);
				if(yes2 == 3) addThreeWR(logo, 5, 0);
				if(yes2 == 4) addFourWR(logo, 5, 0);
				if(yes2 == 5) addFiveWR(logo, 5, 0);
				if(yes2 == 6) addSixWR(logo, 5, 0);
				if(yes2 == 7) addSevenWR(logo, 5, 0);
				if(yes2 == 8) addEightWR(logo, 5, 0);
				if(yes2 == 9) addNineWR(logo, 5, 0);
			}

			if(wr > 99){

		        uint8_t yes = wr/100;
		        uint8_t yes2 = (wr%100)/10;
		        uint8_t yes3 = wr%(yes * 100)%(yes2 * 10);

					if(yes == 0) addZeroWR(logo, -5, 0);
					if(yes == 1) addOneWR(logo, -5, 0);
					if(yes == 2) addTwoWR(logo, -5, 0);
					if(yes == 3) addThreeWR(logo, -5, 0);
					if(yes == 4) addFourWR(logo, -5, 0);
					if(yes == 5) addFiveWR(logo, -5, 0);
					if(yes == 6) addSixWR(logo, -5, 0);
					if(yes == 7) addSevenWR(logo, -5, 0);
					if(yes == 8) addEightWR(logo, -5, 0);
					if(yes == 9) addNineWR(logo, -5, 0);

					if(yes2 == 0) addZeroWR(logo, 0, 0);
					if(yes2 == 1) addOneWR(logo, 0, 0);
					if(yes2 == 2) addTwoWR(logo, 0, 0);
					if(yes2 == 3) addThreeWR(logo, 0, 0);
					if(yes2 == 4) addFourWR(logo, 0, 0);
					if(yes2 == 5) addFiveWR(logo, 0, 0);
					if(yes2 == 6) addSixWR(logo, 0, 0);
					if(yes2 == 7) addSevenWR(logo, 0, 0);
					if(yes2 == 8) addEightWR(logo, 0, 0);
					if(yes2 == 9) addNineWR(logo, 0, 0);

					if(yes3 == 0) addZeroWR(logo, 5, 0);
					if(yes3 == 1) addOneWR(logo, 5, 0);
					if(yes3 == 2) addTwoWR(logo, 5, 0);
					if(yes3 == 3) addThreeWR(logo, 5, 0);
					if(yes3 == 4) addFourWR(logo, 5, 0);
					if(yes3 == 5) addFiveWR(logo, 5, 0);
					if(yes3 == 6) addSixWR(logo, 5, 0);
					if(yes3 == 7) addSevenWR(logo, 5, 0);
					if(yes3 == 8) addEightWR(logo, 5, 0);
					if(yes3 == 9) addNineWR(logo, 5, 0);
			}

}

void decounterSkake3(vector_t *decounter){

	resetVector(decounter);

	addPixelToVector(decounter, newPixel(12, 10, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 10, COLOR_RED));
	addPixelToVector(decounter, newPixel(12, 21, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 21, COLOR_RED));
 	addPixelToVector(decounter, newPixel(19, 15, COLOR_RED));
	addPixelToVector(decounter, newPixel(14, 15, COLOR_RED));
 	addPixelToVector(decounter, newPixel(13, 15, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 7, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 8, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(index, 9, COLOR_RED));
	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 24, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 23, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(index, 22, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(7, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(8, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(9, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(10, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(11, index, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(24, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(23, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(22, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(21, index, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(20, index, COLOR_RED));

	addPixelToVector(decounter, newPixel(13, 10, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 10, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 10, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 10, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 10, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 10, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(12, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 12, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 13, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 14, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(15, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 15, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(19, 16, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 17, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 18, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 20, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(12, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(13, 21, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 21, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 21, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 21, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 21, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 21, COLOR_WHITE));

	for(uint8_t i = 13; i < 19; i++) for(uint8_t j = 11; j < 15; j++) addPixelToVector(decounter, newPixel(i, j, COLOR_RED));
	for(uint8_t i = 13; i < 19; i++) for(uint8_t j = 16; j < 21; j++) addPixelToVector(decounter, newPixel(i, j, COLOR_RED));

	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(12, index, COLOR_RED));

}

void decounterSkake2(vector_t *decounter){

	resetVector(decounter);

	addPixelToVector(decounter, newPixel(12, 11, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 11, COLOR_RED));
	addPixelToVector(decounter, newPixel(12, 15, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 15, COLOR_RED));
 	addPixelToVector(decounter, newPixel(12, 20, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 20, COLOR_RED));
 	addPixelToVector(decounter, newPixel(12, 20, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 8, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 9, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(index, 10, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 23, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 22, COLOR_RED));
	for(uint8_t index = 10; index < 22; index++) addPixelToVector(decounter, newPixel(index, 21, COLOR_RED));

	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(11, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(10, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(9, index, COLOR_RED));
	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(8, index, COLOR_RED));

	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(20, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(21, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(22, index, COLOR_RED));
	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(23, index, COLOR_RED));

	addPixelToVector(decounter, newPixel(12, 12, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(13, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 11, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 11, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(19, 12, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 13, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(19, 14, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(13, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 15, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(12, 16, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(12, 17, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(12, 18, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(12, 19, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(19, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(13, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 20, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 20, COLOR_WHITE));

	for(uint8_t i = 13; i < 19; i++) for(uint8_t j = 12; j < 15; j++) addPixelToVector(decounter, newPixel(i, j, COLOR_RED));
	for(uint8_t i = 13; i < 19; i++) for(uint8_t j = 16; j < 20; j++) addPixelToVector(decounter, newPixel(i, j, COLOR_RED));

	addPixelToVector(decounter, newPixel(12, 13, COLOR_RED));
	addPixelToVector(decounter, newPixel(12, 14, COLOR_RED));

	addPixelToVector(decounter, newPixel(19, 16, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 17, COLOR_RED));
	addPixelToVector(decounter, newPixel(19, 18, COLOR_RED));

}

void decounterSkake1(vector_t *decounter){

	resetVector(decounter);

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 9, COLOR_RED));
	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(index, 10, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 11, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(22, index, COLOR_RED));
	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(21, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(20, index, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(index, 22, COLOR_RED));
	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(index, 21, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(index, 20, COLOR_RED));

	for(uint8_t index = 13; index < 19; index++) addPixelToVector(decounter, newPixel(9, index, COLOR_RED));
	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(10, index, COLOR_RED));
	for(uint8_t index = 11; index < 21; index++) addPixelToVector(decounter, newPixel(11, index, COLOR_RED));

	addPixelToVector(decounter, newPixel(13, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(15, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(17, 19, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(18, 19, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(16, 18, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 17, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 16, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 15, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 14, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 13, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(16, 12, COLOR_WHITE));

	addPixelToVector(decounter, newPixel(15, 13, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(14, 14, COLOR_WHITE));
	addPixelToVector(decounter, newPixel(13, 15, COLOR_WHITE));

	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(12, index, COLOR_RED));
	for(uint8_t index = 12; index < 20; index++) addPixelToVector(decounter, newPixel(19, index, COLOR_RED));
	for(uint8_t index = 12; index < 19; index++) addPixelToVector(decounter, newPixel(18, index, COLOR_RED));
	for(uint8_t index = 12; index < 19; index++) addPixelToVector(decounter, newPixel(17, index, COLOR_RED));
	for(uint8_t index = 14; index < 19; index++) addPixelToVector(decounter, newPixel(15, index, COLOR_RED));
	for(uint8_t index = 15; index < 19; index++) addPixelToVector(decounter, newPixel(14, index, COLOR_RED));
	for(uint8_t index = 16; index < 19; index++) addPixelToVector(decounter, newPixel(13, index, COLOR_RED));

	addPixelToVector(decounter, newPixel(15, 12, COLOR_RED));
	addPixelToVector(decounter, newPixel(14, 12, COLOR_RED));
	addPixelToVector(decounter, newPixel(13, 12, COLOR_RED));
	addPixelToVector(decounter, newPixel(14, 13, COLOR_RED));
	addPixelToVector(decounter, newPixel(13, 13, COLOR_RED));
	addPixelToVector(decounter, newPixel(13, 14, COLOR_RED));


}

void gameoverScreen(vector_t *screen){

	resetVector(screen);

	// LE D
	addPixelToVector(screen, newPixel(1, 2, COLOR_GREEN));
	addPixelToVector(screen, newPixel(1, 3, COLOR_GREEN));
	addPixelToVector(screen, newPixel(1, 4, COLOR_GREEN));
	addPixelToVector(screen, newPixel(1, 19, COLOR_GREEN));
	addPixelToVector(screen, newPixel(1, 20, COLOR_GREEN));
	addPixelToVector(screen, newPixel(1, 21, COLOR_GREEN));

	for(uint8_t index = 2; index < 22 ; index++){
			addPixelToVector(screen, newPixel(2, index, COLOR_GREEN));
			addPixelToVector(screen, newPixel(3, index, COLOR_GREEN));
	}
	for(uint8_t index = 2; index < 5 ; index++){
				addPixelToVector(screen, newPixel(4, index, COLOR_GREEN));
				addPixelToVector(screen, newPixel(5, index, COLOR_GREEN));
				addPixelToVector(screen, newPixel(6, index, COLOR_GREEN));
				addPixelToVector(screen, newPixel(7, index, COLOR_GREEN));

		}
	for(uint8_t index = 19; index < 22 ; index++){
					addPixelToVector(screen, newPixel(4, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(5, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(6, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(7, index, COLOR_GREEN));

			}

	for(uint8_t index = 3; index < 21 ; index++){
				addPixelToVector(screen, newPixel(8, index, COLOR_GREEN));
				addPixelToVector(screen, newPixel(9, index, COLOR_GREEN));
	}

	//LE I
	for(uint8_t index = 2; index < 7 ; index++){
					addPixelToVector(screen, newPixel(13, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(14, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(18, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(19, index, COLOR_GREEN));
			}

	for(uint8_t index = 17; index <22  ; index++){
						addPixelToVector(screen, newPixel(13, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(14, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(18, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(19, index, COLOR_GREEN));
				}

	for(uint8_t index = 2; index < 22 ; index++){
					addPixelToVector(screen, newPixel(15, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(16, index, COLOR_GREEN));
					addPixelToVector(screen, newPixel(17, index, COLOR_GREEN));
		}

	//LE E

	for(uint8_t index = 2; index < 22 ; index++){
						addPixelToVector(screen, newPixel(23, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(24, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(25, index, COLOR_GREEN));
			}

	for(uint8_t index = 2; index < 5 ; index++){
						addPixelToVector(screen, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(27, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(28, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(29, index, COLOR_GREEN));
			}
	for(uint8_t index = 10; index < 14 ; index++){
						addPixelToVector(screen, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(27, index, COLOR_GREEN));
				}
	for(uint8_t index = 19; index < 22 ; index++){
						addPixelToVector(screen, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(27, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(28, index, COLOR_GREEN));
						addPixelToVector(screen, newPixel(29, index, COLOR_GREEN));
				}

	// Partie Jaune (3D)

	for(uint8_t index = 1; index < 8 ; index++){
						addPixelToVector(screen, newPixel(index, 1, COLOR_YELLOW));
					}
	for(uint8_t index = 5; index < 19 ; index++){
							addPixelToVector(screen, newPixel(4, index, COLOR_YELLOW));
						}

	addPixelToVector(screen, newPixel(8, 1, COLOR_YELLOW));
	addPixelToVector(screen, newPixel(9, 1, COLOR_YELLOW));

	for(uint8_t index = 2; index < 22 ; index++){
								addPixelToVector(screen, newPixel(10, index, COLOR_YELLOW));
							}

	addPixelToVector(screen, newPixel(8, 21, COLOR_YELLOW));
	addPixelToVector(screen, newPixel(9, 21, COLOR_YELLOW));

	//LE I (3D)
	for(uint8_t index = 13; index < 20 ; index++){
									addPixelToVector(screen, newPixel(index, 1, COLOR_YELLOW));
								}

	for(uint8_t index = 1; index < 8 ; index++){
									addPixelToVector(screen, newPixel(20, index, COLOR_YELLOW));
								}

	addPixelToVector(screen, newPixel(19, 7, COLOR_YELLOW));

	for(uint8_t index = 7; index < 18 ; index++){
										addPixelToVector(screen, newPixel(18, index, COLOR_YELLOW));
									}

	addPixelToVector(screen, newPixel(19, 16, COLOR_YELLOW));

	for(uint8_t index = 16; index < 22 ; index++){
											addPixelToVector(screen, newPixel(20, index, COLOR_YELLOW));
										}

	// LE E (3D)
	for(uint8_t index = 23; index < 30 ; index++){
										addPixelToVector(screen, newPixel(index, 1, COLOR_YELLOW));
									}

	for(uint8_t index = 1; index < 5 ; index++){
										addPixelToVector(screen, newPixel(30, index, COLOR_YELLOW));
									}

	for(uint8_t index = 27; index < 31 ; index++){
											addPixelToVector(screen, newPixel(index, 5, COLOR_YELLOW));
										}

	for(uint8_t index = 5; index < 10 ; index++){
											addPixelToVector(screen, newPixel(26, index, COLOR_YELLOW));
										}

	addPixelToVector(screen, newPixel(27, 9, COLOR_YELLOW));

	for(uint8_t index = 9; index < 15 ; index++){
												addPixelToVector(screen, newPixel(28, index, COLOR_YELLOW));
											}

	addPixelToVector(screen, newPixel(27, 14, COLOR_YELLOW));

	for(uint8_t index = 14; index < 19 ; index++){
												addPixelToVector(screen, newPixel(26, index, COLOR_YELLOW));
											}

	addPixelToVector(screen, newPixel(27, 18, COLOR_YELLOW));
	addPixelToVector(screen, newPixel(28, 14, COLOR_YELLOW));
	addPixelToVector(screen, newPixel(29, 14, COLOR_YELLOW));

	for(uint8_t index = 18; index < 22 ; index++){
											addPixelToVector(screen, newPixel(30, index, COLOR_YELLOW));
										}
}

void modifyLogoInitialiation(vector_t *logo, uint8_t letter){
	if(letter == 'h') {
		setColorPixel(getPixelWithPos(logo, 10, 6), COLOR_RED);
		setColorPixel(getPixelWithPos(logo, 11, 6), COLOR_RED);
		setColorPixel(getPixelWithPos(logo, 10, 8), COLOR_WHITE);
		setColorPixel(getPixelWithPos(logo, 11, 8), COLOR_WHITE);
		setColorPixel(getPixelWithPos(logo, 12, 7), COLOR_RED);
		setColorPixel(getPixelWithPos(logo, 12, 8), COLOR_RED);
	} else if(letter == 'n'){
		setColorPixel(getPixelWithPos(logo, 10, 6), COLOR_WHITE);
		setColorPixel(getPixelWithPos(logo, 11, 6), COLOR_WHITE);
		setColorPixel(getPixelWithPos(logo, 10, 8), COLOR_RED);
		setColorPixel(getPixelWithPos(logo, 11, 8), COLOR_RED);
		setColorPixel(getPixelWithPos(logo, 12, 7), COLOR_WHITE);
		setColorPixel(getPixelWithPos(logo, 12, 8), COLOR_WHITE);
	}
}

void scoreScreen(vector_t *screen, uint16_t score){

	resetVector(screen);

	//S
		addPixelToVector(screen, newPixel(2, 1, COLOR_RED));
		addPixelToVector(screen, newPixel(2, 2, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 1, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 1, COLOR_RED));
		addPixelToVector(screen, newPixel(2, 3, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 3, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 3, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 4, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 5, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 5, COLOR_RED));
		addPixelToVector(screen, newPixel(2, 5, COLOR_RED));

		//C
		addPixelToVector(screen, newPixel(2, 7, COLOR_RED));
		addPixelToVector(screen, newPixel(2, 8, COLOR_RED));
		addPixelToVector(screen, newPixel(2, 9, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 7, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 9, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 7, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 9, COLOR_RED));

		//O
		for(uint8_t index = 11; index < 14 ; index++){
									addPixelToVector(screen, newPixel(2, index, COLOR_RED));
									addPixelToVector(screen, newPixel(4, index, COLOR_RED));
								}
		addPixelToVector(screen, newPixel(3, 11, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 13, COLOR_RED));

		//R
		for(uint8_t index = 15; index < 19 ; index++){
										addPixelToVector(screen, newPixel(2, index, COLOR_RED));
									}
		addPixelToVector(screen, newPixel(3, 15, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 15, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 16, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 17, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 18, COLOR_RED));

		//E
		for(uint8_t index = 20; index < 25 ; index++){
										addPixelToVector(screen, newPixel(2, index, COLOR_RED));
									}
		addPixelToVector(screen, newPixel(3, 20, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 20, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 22, COLOR_RED));
		addPixelToVector(screen, newPixel(3, 24, COLOR_RED));
		addPixelToVector(screen, newPixel(4, 24, COLOR_RED));

        if(score < 10){
        	if(score == 0) addZeroScore(screen, 9, 0);
        	if(score == 1) addOneScore(screen, 9, 0);
        	if(score == 2) addTwoScore(screen, 9, 0);
        	if(score == 3) addThreeScore(screen, 9, 0);
        	if(score == 4) addFourScore(screen, 9, 0);
        	if(score == 5) addFiveScore(screen, 9, 0);
        	if(score == 6) addSixScore(screen, 9, 0);
        	if(score == 7) addSevenScore(screen, 9, 0);
        	if(score == 8) addEightScore(screen, 9, 0);
        	if(score == 9) addNineScore(screen, 9, 0);
        }

		if(score > 9){

			uint8_t yes = (score/10);
			uint8_t yes2 = (score%10);

			if(yes == 0) addZeroScore(screen, 0, 0);
			if(yes == 1) addOneScore(screen, 0, 0);
			if(yes == 2) addTwoScore(screen, 0, 0);
			if(yes == 3) addThreeScore(screen, 0, 0);
			if(yes == 4) addFourScore(screen, 0, 0);
			if(yes == 5) addFiveScore(screen, 0, 0);
			if(yes == 6) addSixScore(screen, 0, 0);
			if(yes == 7) addSevenScore(screen, 0, 0);
			if(yes == 8) addEightScore(screen, 0, 0);
			if(yes == 9) addNineScore(screen, 0, 0);

			if(yes2 == 0) addZeroScore(screen, 9, 0);
			if(yes2 == 1) addOneScore(screen, 9, 0);
			if(yes2 == 2) addTwoScore(screen, 9, 0);
			if(yes2 == 3) addThreeScore(screen, 9, 0);
			if(yes2 == 4) addFourScore(screen, 9, 0);
			if(yes2 == 5) addFiveScore(screen, 9, 0);
			if(yes2 == 6) addSixScore(screen, 9, 0);
			if(yes2 == 7) addSevenScore(screen, 9, 0);
			if(yes2 == 8) addEightScore(screen, 9, 0);
			if(yes2 == 9) addNineScore(screen, 9, 0);
		}

		if(score > 99){

	        uint8_t yes = score/100;
	        uint8_t yes2 = (score%100)/10;
	        uint8_t yes3 = score%(yes * 100)%(yes2 * 10);

				if(yes == 0) addZeroScore(screen, -9, 0);
				if(yes == 1) addOneScore(screen, -9, 0);
				if(yes == 2) addTwoScore(screen, -9, 0);
				if(yes == 3) addThreeScore(screen, -9, 0);
				if(yes == 4) addFourScore(screen, -9, 0);
				if(yes == 5) addFiveScore(screen, -9, 0);
				if(yes == 6) addSixScore(screen, -9, 0);
				if(yes == 7) addSevenScore(screen, -9, 0);
				if(yes == 8) addEightScore(screen, -9, 0);
				if(yes == 9) addNineScore(screen, -9, 0);

				if(yes2 == 0) addZeroScore(screen, 0, 0);
				if(yes2 == 1) addOneScore(screen, 0, 0);
				if(yes2 == 2) addTwoScore(screen, 0, 0);
				if(yes2 == 3) addThreeScore(screen, 0, 0);
				if(yes2 == 4) addFourScore(screen, 0, 0);
				if(yes2 == 5) addFiveScore(screen, 0, 0);
				if(yes2 == 6) addSixScore(screen, 0, 0);
				if(yes2 == 7) addSevenScore(screen, 0, 0);
				if(yes2 == 8) addEightScore(screen, 0, 0);
				if(yes2 == 9) addNineScore(screen, 0, 0);

				if(yes3 == 0) addZeroScore(screen, 9, 0);
				if(yes3 == 1) addOneScore(screen, 9, 0);
				if(yes3 == 2) addTwoScore(screen, 9, 0);
				if(yes3 == 3) addThreeScore(screen, 9, 0);
				if(yes3 == 4) addFourScore(screen, 9, 0);
				if(yes3 == 5) addFiveScore(screen, 9, 0);
				if(yes3 == 6) addSixScore(screen, 9, 0);
				if(yes3 == 7) addSevenScore(screen, 9, 0);
				if(yes3 == 8) addEightScore(screen, 9, 0);
				if(yes3 == 9) addNineScore(screen, 9, 0);
		}

}

void addZeroScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 4; index < 22; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 17; index < 20; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
	}
}

void addOneScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 4; index < 20; index++){
		addPixelToVector(screen, newPixel((uint8_t)(19 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 15; index < 22; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 4; index < 7; index++) addPixelToVector(screen, newPixel((uint8_t)(17 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));

	for(uint8_t index = 5; index < 8; index++) addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));

	addPixelToVector(screen, newPixel((uint8_t)(18 + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
	addPixelToVector(screen, newPixel((uint8_t)(18 + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
	addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
	addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(7 + offset_y), COLOR_GREEN));
}

void addTwoScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 15; index < 20 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(11 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 4; index < 14 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 14; index < 19 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 19; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
}

void addThreeScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 15; index < 20 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(11 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 4; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

}

void addFourScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 4; index < 11 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
	for(uint8_t index = 4; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
	for(uint8_t index = 15; index < 20 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(11 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
	}
}

void addFiveScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 7; index < 11 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 15; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(11 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 14; index < 19 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
}

void addSixScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 7; index < 11 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 15; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(11 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 14; index < 19 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
}

void addSevenScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 15; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 7; index < 9 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 9; index < 11 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(18 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(19 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 11; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(17 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(18 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
}

void addEightScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 4; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), index, COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), index, COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), index, COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), index, COLOR_GREEN));
	}

	for(uint8_t index = 17; index < 20 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
	}
}

void addNineScore(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 4; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index =4; index < 14; index ++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 17; index < 20 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(6 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(5 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(4 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(12 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(13 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(19 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(20 + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(21 + offset_y), COLOR_GREEN));
	}

	for(uint8_t index = 19; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(15 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
		addPixelToVector(screen, newPixel((uint8_t)(16 + offset_x), (uint8_t)(index + offset_y), COLOR_GREEN));
	}
}

void addZeroWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
}

void addOneWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(19 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(20 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(19 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(20 + offset_y), COLOR_RED));

	for(uint8_t index = 20; index < 25 ; index++) addPixelToVector(screen, newPixel(28, index, COLOR_RED));
}

void addTwoWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 20; index < 25 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
																	}
	for(uint8_t index = 17; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 24; index < 27 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}
}

void addThreeWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 20; index < 23 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
	}

	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}
}

void addFourWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 17; index < 24 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
}

void addFiveWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 20; index < 25 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
	}

	for(uint8_t index = 19; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 24; index < 27 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}
}

void addSixWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 22; index < 25 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
	}

	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 24; index < 27 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}
}

void addSevenWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 20; index < 25 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(index + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
	}

	for(uint8_t index = 19; index < 22 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 24; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
}

void addEightWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
}

void addNineWR(vector_t *screen, int8_t offset_x, int8_t offset_y){
	for(uint8_t index = 17; index < 29 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(23 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(24 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	for(uint8_t index = 17; index < 24 ; index++){
		addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
		addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(index + offset_y), COLOR_RED));
	}

	addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(20 + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(21 + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));

	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(17 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(18 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(22 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(23 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(27 + offset_y), COLOR_RED));
	addPixelToVector(screen, newPixel((uint8_t)(22 + offset_x), (uint8_t)(28 + offset_y), COLOR_RED));
}
