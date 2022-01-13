#include "accelerometer.h"

void accelerometer_measure(MPU6050_t *datas)
{
	MPU6050_ReadAccelerometer(datas);
}


void ACCELEROMETER_init(MPU6050_t *datas){
	MPU6050_Init(datas, GPIOA, GPIO_PIN_0, MPU6050_Device_0, MPU6050_Accelerometer_8G, MPU6050_Gyroscope_2000s);
}
