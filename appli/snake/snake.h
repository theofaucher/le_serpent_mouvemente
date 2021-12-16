/*
 * snake.h
 *
 *  Created on: 10 déc. 2021
 *      Author: theof
 */

#ifndef SNAKE_SNAKE_H_
#define SNAKE_SNAKE_H_

#include "MPU6050/stm32f1_mpu6050.h"

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
} snake_t;

#endif /* SNAKE_SNAKE_H_ */
