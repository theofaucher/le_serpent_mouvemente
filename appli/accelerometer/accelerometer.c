#include "MPU6050/stm32f1_mpu6050.h"
#include "../snake/snake.h"

MPU6050_t * accelerometer_measure(MPU6050_t *datas);
MPU6050_t accelerometer_init(void);

MPU6050_t * accelerometer_measure(MPU6050_t *datas)
{
	MPU6050_ReadAccelerometer(datas);
	return datas;
}


MPU6050_t accelerometer_init(void){
	MPU6050_t datas;
	MPU6050_Init(&datas, GPIOA, GPIO_PIN_0, MPU6050_Device_0, MPU6050_Accelerometer_8G, MPU6050_Gyroscope_2000s);
	return datas;
}
