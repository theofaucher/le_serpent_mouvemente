/*
 * snake.h
 *
 *  Created on: 10 déc. 2021
 *      Author: theof
 */

#ifndef GAME_GAME_H_
#define GAME_GAME_H_

#include "../utils/vector.h"
#include "MPU6050/stm32f1_mpu6050.h"
#include <stdbool.h>

typedef enum {
	SNAKE_forward,
	SNAKE_backward,
	SNAKE_left,
	SNAKE_right,
	SNAKE_stay,
} snake_direction_e;

typedef struct {
	uint8_t score;
	snake_direction_e SNAKE_direction;
	vector_t *snake;
	vector_t *wall;
	pixel_t *apple;
} game_t;

void newGame(game_t *game);
void measureToDirection(game_t *game, MPU6050_t *datas);
void snakeSpawn(game_t *game);
void snakeEatApple(game_t *game);
bool_e isAppleEaten(game_t *game);
void appleSpawn(game_t *game);
void snakeDeplacement(game_t *game);
bool isDead(game_t *game);
void printGame(game_t *game);

snake_direction_e getSnakeDirection(game_t *game);
void setSnakeDirection(game_t *game, MPU6050_t *datas);
vector_t *getSnake(game_t *game);
vector_t *getWall(game_t *game);
pixel_t *getApple(game_t *game);


#endif /* GAME_GAME_H_ */
