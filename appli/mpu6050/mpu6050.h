/*
 * accelerometer.h
 *
 *  Created on: 10 déc. 2021
 *      Author: theof
 */

#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_

#include "MPU6050/stm32f1_mpu6050.h"

void ACCELEROMETER_measure(MPU6050_t *datas);
void GYROSCOPE_measure(MPU6050_t *datas);
void MPU6050_init(MPU6050_t *datas);

#endif /* ACCELEROMETER_H_ */
