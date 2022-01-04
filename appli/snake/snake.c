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
	bool pixelAlreadyOn = false;
	srand(0);
	do{
		snake->apple->position_x = (uint8_t)rand() % 31;
		snake->apple->position_y = (uint8_t)rand() % 31;

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

	pixel_t *pixel = getFirst(snake->snake);
	if(getSnakeDirection(snake) == SNAKE_forward) setPositionsPixel(pixel, getPositionXPixel(pixel), (uint8_t)(getPositionYPixel(pixel) - 1));
	else if(getSnakeDirection(snake) == SNAKE_backward) setPositionsPixel(pixel, getPositionXPixel(pixel), (uint8_t)(getPositionYPixel(pixel) + 1));
	else if(getSnakeDirection(snake) == SNAKE_left) setPositionsPixel(pixel, (uint8_t)(getPositionXPixel(pixel) - 1), getPositionYPixel(pixel));
	else if(getSnakeDirection(snake) == SNAKE_right) setPositionsPixel(pixel, (uint8_t)(getPositionXPixel(pixel) + 1), getPositionYPixel(pixel));

	for(uint16_t index = 1; index  < snake->snake->taille - 1; index ++){
		pixel_t *pixel = getPixel(snake->snake, index);
		pixel_t *pixel_bis = getPixel(snake->snake, (uint16_t)(index + 1));

		setPositionsPixel(pixel, getPositionXPixel(pixel_bis), getPositionYPixel(pixel_bis));
	}
}

bool isAppleEaten(snake_t *snake){
	return getPositionXPixel(getFirst(snake->snake)) == getPositionXPixel(getFirst(snake->apple)) && getPositionYPixel(getFirst(snake->snake)) == getPositionYPixel(getFirst(snake->apple));
}

void snakeEatApple(snake_t *snake){
	uint8_t posXLast = getPositionXPixel(getLast(snake->snake));
	uint8_t posYLast = getPositionYPixel(snake->apple);

	uint8_t posXBeforeLast = getPositionXPixel(getPixel(snake->snake, (uint16_t)(snake->snake->taille-1)));
	uint8_t posYBeforeLast = getPositionYPixel(getPixel(snake->snake, (uint16_t)(snake->snake->taille-1)));

	uint8_t posXNewPixel;
	uint8_t posYNewPixel;

	if(posXLast == posXBeforeLast && posXLast > posXBeforeLast){
		posXNewPixel = posXLast;
		posYNewPixel = (uint8_t)(posXLast + 1);
	} else if (posXLast == posXBeforeLast && posXLast < posXBeforeLast){
		posXNewPixel = posXLast;
		posYNewPixel = (uint8_t)(posYBeforeLast - 1);
	} else if (posYLast == posYBeforeLast && posXLast > posXBeforeLast){
		posXNewPixel = (uint8_t)(posXLast + 1);
		posYNewPixel = posYLast;
	} else if (posYLast == posYBeforeLast && posXLast < posXBeforeLast){
		posXNewPixel = (uint8_t)(posXLast + 1);
		posYNewPixel = posYLast;
	}

	addPixelToVector(snake->snake, newPixel(posXNewPixel, posYNewPixel, COLOR_GREEN));
}

snake_direction_e getSnakeDirection(snake_t *snake){
	return snake->SNAKE_direction;
}

void setSnakeDirection(snake_t *snake, MPU6050_t *datas){
	if(datas->Accelerometer_Y < -1500) snake->SNAKE_direction = SNAKE_left;
	else if(datas->Accelerometer_Y > 1500) snake->SNAKE_direction = SNAKE_right;
	else if(datas->Accelerometer_X < -1500) snake->SNAKE_direction = SNAKE_forward;
	else if(datas->Accelerometer_X > 1500) snake->SNAKE_direction = SNAKE_backward;
	else snake->SNAKE_direction = SNAKE_stay;
}
