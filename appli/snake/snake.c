/*
 * snake.c
 *
 *  Created on: 10 déc. 2021
 *      Author: theof
 */
#include "macro_types.h"
#include "../accelerometer/accelerometer.h"
#include "snake.h"

void measureToDirection(MPU6050_t *datas, snake_t *snake);

void measureToDirection(MPU6050_t *datas, snake_t *snake){
	if(datas->Accelerometer_Y < -1500) snake->SNAKE_direction = SNAKE_left;
	else if(datas->Accelerometer_Y > 1500) snake->SNAKE_direction = SNAKE_right;
	else if(datas->Accelerometer_X < -1500) snake->SNAKE_direction = SNAKE_forward;
	else if(datas->Accelerometer_X > 1500) snake->SNAKE_direction = SNAKE_backward;
	else snake->SNAKE_direction = SNAKE_stay;
}
