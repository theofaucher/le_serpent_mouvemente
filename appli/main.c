/**
  ******************************************************************************
  * @file    main.c
  * @author  Nirgal
  * @date    03-July-2019
  * @brief   Default main function.
  ******************************************************************************
*/
#include "stm32f1xx_hal.h"
#include "stm32f1_uart.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "macro_types.h"
#include "systick.h"
#include "MPU6050/stm32f1_mpu6050.h"

void writeLED(bool_e b);
void process_ms(void);
void accelerometer_measure(void);

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

static volatile uint32_t t = 0;
static MPU6050_t datas;
static snake_t snake;

int main(void)
{

	//Initialisation de la couche logicielle HAL (Hardware Abstraction Layer)
	//Cette ligne doit rester la premi�re �tape de la fonction main().
	HAL_Init();

	//Initialisation de l'UART2 � la vitesse de 115200 bauds/secondes (92kbits/s) PA2 : Tx  | PA3 : Rx.
		//Attention, les pins PA2 et PA3 ne sont pas reli�es jusqu'au connecteur de la Nucleo.
		//Ces broches sont redirig�es vers la sonde de d�bogage, la liaison UART �tant ensuite encapsul�e sur l'USB vers le PC de d�veloppement.
	UART_init(UART2_ID,115200);

	//"Indique que les printf sortent vers le p�riph�rique UART2."
	SYS_set_std_usart(UART2_ID, UART2_ID, UART2_ID);

	//Initialisation du port de la led Verte (carte Nucleo)
	BSP_GPIO_PinCfg(LED_GREEN_GPIO, LED_GREEN_PIN, GPIO_MODE_OUTPUT_PP,GPIO_NOPULL,GPIO_SPEED_FREQ_HIGH);

	//On ajoute la fonction process_ms � la liste des fonctions appel�es automatiquement chaque ms par la routine d'interruption du p�riph�rique SYSTICK
	Systick_add_callback_function(&process_ms);

	MPU6050_Init(&datas, GPIOA, GPIO_PIN_0, MPU6050_Device_0, MPU6050_Accelerometer_8G, MPU6050_Gyroscope_2000s);

	while(1)	//boucle de t�che de fond
	{
		if(!t)
		{
			t = 100;
			accelerometer_measure();
			if(snake.SNAKE_direction == SNAKE_left) printf("Penche a gauche\n");
			else if(snake.SNAKE_direction == SNAKE_right) printf("Penche a droite\n");
			else if(snake.SNAKE_direction == SNAKE_forward) printf("Penche en avant\n");
			else if(snake.SNAKE_direction == SNAKE_backward) printf("Penche en arriere\n");
			HAL_GPIO_TogglePin(LED_GREEN_GPIO, LED_GREEN_PIN);
		}

	}
}

void writeLED(bool_e b)
{
	HAL_GPIO_WritePin(LED_GREEN_GPIO, LED_GREEN_PIN, b);
}

void process_ms(void)
{
	if(t)
		t--;
}

void accelerometer_measure(void)
{
	MPU6050_ReadAccelerometer(&datas);

	if(datas.Accelerometer_Y < -1500) snake.SNAKE_direction = SNAKE_left;
	else if(datas.Accelerometer_Y > 1500) snake.SNAKE_direction = SNAKE_right;
	else if(datas.Accelerometer_X < -1500) snake.SNAKE_direction = SNAKE_forward;
	else if(datas.Accelerometer_X > 1500) snake.SNAKE_direction = SNAKE_backward;
	else snake.SNAKE_direction = SNAKE_stay;
}
