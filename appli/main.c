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
#include "matrix_led_32_32.h"
#include "utils/vector.h"
#include "matrix/matrix.h"
#include "snake/initialisation.h"
#include <stdlib.h>
#include "snake/snake.h"

static volatile uint32_t t = 0;
//static MPU6050_t datas;
static snake_t *snake;

static void state_machine(void);
void process_ms(void);

int main(void)
{
	//Initialisation de la couche logicielle HAL (Hardware Abstraction Layer)
	//Cette ligne doit rester la premi�re �tape de la fonction main().
	HAL_Init();

	//Initialisation du port de la led bleu
	BSP_GPIO_PinCfg(LED_GREEN_GPIO, LED_GREEN_PIN, GPIO_MODE_OUTPUT_PP,GPIO_NOPULL,GPIO_SPEED_FREQ_HIGH);

	//On ajoute la fonction process_ms � la liste des fonctions appel�es automatiquement chaque ms par la routine d'interruption du p�riph�rique SYSTICK
	Systick_add_callback_function(&process_ms);

	snake = malloc(sizeof(snake_t));

	while(1)	//boucle de t�che de fond
	{
		if(!t){
			t = 200;
			HAL_GPIO_TogglePin(LED_GREEN_GPIO, LED_GREEN_PIN);
		}
		state_machine();
	}
}

static void state_machine(void){
	typedef enum
		{
			INIT,
			SHAKE_TO_START,
			PLAY_A_GAME,
			GAMEOVER
		}state_e;

		static state_e state = INIT;
		static state_e previous_state = INIT;
		bool_e entrance = (state!=previous_state)?TRUE:FALSE;
		previous_state = state;


		switch(state)
		{
			case INIT:
//				ACCELEROMETER_init(&datas);
				MATRIX_init();
				Systick_add_callback_function(&process_ms);
				state = SHAKE_TO_START;	//le mode par d�faut au d�marrage.
				break;
			case SHAKE_TO_START:
					state = PLAY_A_GAME;
				break;
			case PLAY_A_GAME:
				if(entrance)
				{
					newSnake(snake);
					wallCreation(getVector(snake));
					snakeSpawn(snake);
				}

				MATRIX_display(vectorToMatrix(getVector(snake)));
				break;
			case GAMEOVER:
				state = SHAKE_TO_START;
				break;
			default:
				break;
		}
}

void process_ms(void)
{
	if(t)
		t--;
}
