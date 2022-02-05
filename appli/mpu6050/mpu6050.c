#include <mpu6050/mpu6050.h>

void ACCELEROMETER_measure(MPU6050_t *datas)
{
	MPU6050_ReadAccelerometer(datas);
}

void GYROSCOPE_measure(MPU6050_t *datas){
	MPU6050_ReadGyroscope(datas);
}

void MPU6050_init(MPU6050_t *datas){
	MPU6050_Init(datas, GPIOA, GPIO_PIN_0, MPU6050_Device_0, MPU6050_Accelerometer_8G, MPU6050_Gyroscope_2000s);
}
