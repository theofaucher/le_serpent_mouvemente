/*
 * snake.c
 *
 *  Created on: 24 déc. 2021
 *      Author: theof
 */

#include "game/game.h"
#include "../matrix/matrix.h"
#include <stdlib.h>
#include "macro_types.h"
#include <stdbool.h>
#include "stm32f1_gpio.h"
#include "stm32f1_adc.h"

void newGame(game_t *game){
	mallocGame(game);
	game->score = 0;
	game->SNAKE_direction = SNAKE_right;
}

void mallocGame(game_t *game){

	game->animation = malloc(sizeof(vector_t));
	newVector2(game->animation, 500);

	game->snake = malloc(sizeof(vector_t));
	newVector2(getSnake(game), 961);

	game->wall = malloc(sizeof(vector_t));
	newVector2(getWall(game), 150);

	wallCreation(getWall(game));

	game->apple = malloc(sizeof(pixel_t));
	newPixel2(getApple(game), 16, 16, COLOR_RED);

}

void freeGame(game_t *game){
	free(game->animation->array);
	free(game->snake->array);
	free(game->wall->array);
	free(game->animation);
	free(game->snake);
	free(game->wall);
	free(game->apple);
	free(game);
}

void appleSpawn(game_t *game){
	bool pixelAlreadyOn = true;
	bool pixelAlreadyOn_bis = true;

	do{
		srand(ADC_getValue(ADC_8));
		setPositionXPixel(getApple(game), (uint8_t)(rand() % 30 + 1));
		srand(ADC_getValue(ADC_9));
		setPositionYPixel(getApple(game), (uint8_t)(rand() % 30 + 1));
		for(uint8_t index = 0; index < 32; index++){
			if(getPositionXPixel(getPixel(getWall(game), index)) == getPositionXPixel(getApple(game)) || getPositionYPixel(getPixel(getWall(game), index)) == getPositionYPixel(getApple(game))) pixelAlreadyOn = true;
			else pixelAlreadyOn = false;
		}

		for(uint16_t index = 0; index < getVectorLength(getSnake(game)); index++){
			if(getPositionXPixel(getPixel(getSnake(game), index)) == getPositionXPixel(getApple(game)) && getPositionYPixel(getPixel(getSnake(game), index)) == getPositionYPixel(getApple(game))) pixelAlreadyOn_bis = true;
			else pixelAlreadyOn_bis = false;
		}

	} while(pixelAlreadyOn && pixelAlreadyOn_bis);

}

void snakeSpawn(game_t *game){
	addPixelToVector(getSnake(game), newPixel(17, 15, COLOR_RED));
	addPixelToVector(getSnake(game), newPixel(16, 15, COLOR_GREEN));
	addPixelToVector(getSnake(game), newPixel(15, 15, COLOR_GREEN));
	addPixelToVector(getSnake(game), newPixel(14, 15, COLOR_GREEN));
	addPixelToVector(getSnake(game), newPixel(13, 15, COLOR_GREEN));
}

void snakeDeplacement(game_t *game){

	pixel_t *head = getFirst(getSnake(game));
	pixel_t head_previous_pos = *head;

	if(getSnakeDirection(game) == SNAKE_forward) {
		if(getPositionYPixel(getPixel(getSnake(game), 1)) != getPositionYPixel(head) - 1){
			setPositionsPixel(head, getPositionXPixel(head), (uint8_t)(getPositionYPixel(head) - 1));
		} else {
			setPositionsPixel(head, getPositionXPixel(head), (uint8_t)(getPositionYPixel(head) + 1));
		}

	}
	else if(getSnakeDirection(game) == SNAKE_backward) {
		if(getPositionYPixel(getPixel(getSnake(game), 1)) != getPositionYPixel(head) + 1){
			setPositionsPixel(head, getPositionXPixel(head), (uint8_t)(getPositionYPixel(head) + 1));
		} else {
			setPositionsPixel(head, getPositionXPixel(head), (uint8_t)(getPositionYPixel(head) - 1));
		}
	}
	else if(getSnakeDirection(game) == SNAKE_left){
		if(getPositionXPixel(getPixel(getSnake(game), 1)) != getPositionXPixel(head) - 1){
			setPositionsPixel(head, (uint8_t)(getPositionXPixel(head) - 1), getPositionYPixel(head));
		} else {
			setPositionsPixel(head, (uint8_t)(getPositionXPixel(head) + 1), getPositionYPixel(head));
		}
	}
	else if(getSnakeDirection(game) == SNAKE_right) {
		if(getPositionXPixel(getPixel(getSnake(game), 1)) != getPositionXPixel(head) + 1){
			setPositionsPixel(head, (uint8_t)(getPositionXPixel(head) + 1), getPositionYPixel(head));
		} else {
			setPositionsPixel(head, (uint8_t)(getPositionXPixel(head) - 1), getPositionYPixel(head));
		}
	}

	for(uint16_t index = (uint16_t)(getVectorLength(getSnake(game)) - 1); index  > 0; index --){
		pixel_t *pixel = getPixel(getSnake(game), index);
		pixel_t *previous_pos = getPixel(getSnake(game), (uint16_t)(index - 1));

		if(index == 1) setPositionsPixel(pixel, getPositionXPixel(&head_previous_pos), getPositionYPixel(&head_previous_pos));
		else setPositionsPixel(pixel, getPositionXPixel(previous_pos), getPositionYPixel(previous_pos));
		setColorPixel(pixel, COLOR_GREEN);
	}

}

bool_e isAppleEaten(game_t *game){
	return getPositionXPixel(getFirst(getSnake(game))) == getPositionXPixel(getApple(game)) && getPositionYPixel(getFirst(getSnake(game))) == getPositionYPixel(getApple(game));
}

bool isDead(game_t *game){
	pixel_t *pixel = getFirst(getSnake(game));
	for(uint16_t index = 1; index < getVectorLength(getSnake(game)); index ++){
		if(getPositionXPixel(pixel) == getPositionXPixel(getPixel(getSnake(game), index)) && getPositionYPixel(pixel) == getPositionYPixel(getPixel(getSnake(game), index))) return 1;
	}
	if(getPositionXPixel(pixel) == 0 || getPositionXPixel(pixel) == 31 || getPositionYPixel(pixel) == 0 || getPositionYPixel(pixel) == 31) return 1;
	return 0;
}

void snakeEatApple(game_t *game){
	uint8_t posXLast = getPositionXPixel(getLast(getSnake(game)));
	uint8_t posYLast = getPositionYPixel(getLast(getSnake(game)));

	uint8_t posXBeforeLast = getPositionXPixel(getPixel(getSnake(game), (uint16_t)(getVectorLength(getSnake(game)) - 1)));
	uint8_t posYBeforeLast = getPositionYPixel(getPixel(getSnake(game), (uint16_t)(getVectorLength(getSnake(game)) - 1)));

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

	addPixelToVector(getSnake(game), newPixel(posXNewPixel, posYNewPixel, COLOR_GREEN));
}

snake_direction_e getSnakeDirection(game_t *game){
	return game->SNAKE_direction;
}

void setSnakeScore(game_t *game, uint16_t score){
	game->score = score;
}

uint16_t getSnakeScore(game_t *game){
	return game->score;
}


void setSnakeDirection(game_t *game, MPU6050_t *datas){
	if(datas->Accelerometer_Y < -1200) game->SNAKE_direction = SNAKE_left;
	else if(datas->Accelerometer_Y > 1200) game->SNAKE_direction = SNAKE_right;
	else if(datas->Accelerometer_X < -1200) game->SNAKE_direction = SNAKE_backward;
	else if(datas->Accelerometer_X > 1200) game->SNAKE_direction = SNAKE_forward;
}

vector_t *getSnake(game_t *game){
	return game->snake;
}

vector_t *getWall(game_t *game){
	return game->wall;
}

vector_t *getAnimation(game_t *game){
	return game->animation;
}

pixel_t *getApple(game_t *game){
	return game->apple;
}

void printGame(game_t *game){
	printVectorWithFusionWithAnotherPixel(getSnake(game), getWall(game), getApple(game));
}
