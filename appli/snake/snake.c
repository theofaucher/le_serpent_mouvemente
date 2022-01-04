/*
 * snake.c
 *
 *  Created on: 24 déc. 2021
 *      Author: theof
 */

#include "snake.h"
#include <stdlib.h>
#include "macro_types.h"
#include <stdbool.h>

void appleSpawn(snake_t *snake){
	time_t t;
	bool pixelAlreadyOn = false;
	srand((unsigned) time(&t));
	do{
		snake->apple->position_x = rand() % 31;
		snake->apple->position_y = rand() % 31;

		for(uint8_t index = 0; index < 32; index++){
			if(getPixel(snake->snake, index)->position_x == snake->apple->position_x || getPixel(snake->snake, index)->position_y == snake->apple->position_y) pixelAlreadyOn = true;
			else pixelAlreadyOn = false;
		}
	} while(pixelAlreadyOn);

}

void snakeSpawn(snake_t *snake){
	addPixelToVector(snake->snake, newPixel(15, 15, COLOR_RED));
	addPixelToVector(snake->snake, newPixel(14, 15, COLOR_GREEN));
	addPixelToVector(snake->snake, newPixel(13, 15, COLOR_GREEN));
}

void snakeDeplacement(snake_t *snake){
	for(uint16_t index = 0; index  < snake->snake->taille; index ++){

	}
}

bool isAppleEaten(snake_t *snake){
	return getPositionXPixel(getFirst(snake->snake)) == getPositionXPixel(getFirst(snake->apple)) && getPositionYPixel(getFirst(snake->snake)) == getPositionYPixel(getFirst(snake->apple));
}

void snakeEatApple(snake_t *snake){
	uint8_t posXLast = getPositionXPixel(getLast(snake->snake));
	uint8_t posYLast = getPositionYPixel(snake->apple);

	uint8_t posXBeforeLast = getPositionXPixel(getPixel(snake->snake, snake->snake->taille-1));
	uint8_t posYBeforeLast = getPositionYPixel(getPixel(snake->snake, snake->snake->taille-1));

	uint8_t posXNewPixel;
	uint8_t posYNewPixel;

	if(posXLast == posXBeforeLast && posXLast > posXBeforeLast){
		posXNewPixel = posXLast;
		posYNewPixel = posXLast + 1;
	} else if (posXLast == posXBeforeLast && posXLast < posXBeforeLast){
		posXNewPixel = posXLast;
		posYNewPixel = posYBeforeLast - 1;
	} else if (posYLast == posYBeforeLast && posXLast > posXBeforeLast){
		posXNewPixel = posXLast + 1;
		posYNewPixel = posYLast;
	} else if (posYLast == posYBeforeLast && posXLast < posXBeforeLast){
		posXNewPixel = posXLast + 1;
		posYNewPixel = posYLast;
	}

	addPixelToVector(snake->snake, newPixel(posXNewPixel, posYNewPixel, COLOR_GREEN));
}
