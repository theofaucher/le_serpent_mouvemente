/*
 * snake.h
 *
 *  Created on: 10 déc. 2021
 *      Author: theof
 */

#ifndef SNAKE_SNAKE_H_
#define SNAKE_SNAKE_H_

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
	pixel_t *apple;
} snake_t;

void newSnake(snake_t *snake);
void measureToDirection(snake_t *snake, MPU6050_t *datas);
void snakeSpawn(snake_t *snake);
void snakeEatApple(snake_t *snake);
bool isAppleEaten(snake_t *snake);
void appleSpawn(snake_t *snake);
void snakeDeplacement(snake_t *snake);
bool isDead(snake_t *snake);

snake_direction_e getSnakeDirection(snake_t *snake);
void setSnakeDirection(snake_t *snake, MPU6050_t *datas);
vector_t *getVector(snake_t *snake);


#endif /* SNAKE_SNAKE_H_ */
