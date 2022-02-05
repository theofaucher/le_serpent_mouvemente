	/**
  ******************************************************************************
  * @file    main.c
  * @author  Nirgal
  * @date    03-July-2019
  * @brief   Default main function.
  ******************************************************************************
*/
#include "game/animation.h"
#include "game/game.h"
#include "stm32f1xx_hal.h"
#include "stm32f1_uart.h"
#include "stm32f1_sys.h"
#include "stm32f1_gpio.h"
#include "stm32f1_adc.h"
#include "macro_types.h"
#include "systick.h"
#include "utils/vector.h"
#include "matrix/matrix.h"
#include <stdlib.h>

static volatile uint32_t t = 0;
static volatile uint32_t a = 0;
static volatile uint32_t c = 0;
static uint8_t timer_counter = 0;
static bool_e activation_time_remaning = 0;
static MPU6050_t datas;
static game_t *game;

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

	while(1)	//boucle de t�che de fond
	{
		if(!t){
			t = 400;
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

		static uint8_t shake_counter = 0;

		switch(state)
		{
			case INIT:
				MPU6050_init(&datas);
				MATRIX_init();
				ADC_init();
				Systick_add_callback_function(&process_ms);
				state = SHAKE_TO_START;	//le mode par d�faut au d�marrage.
				break;
			case SHAKE_TO_START:
				if(entrance){
					game = malloc(sizeof(game_t));
					newGame(game);
					logoInitialisation(getAnimation(game), FLASH_read_word(0));
					shake_counter = 0;
					activation_time_remaning = 0;
					timer_counter = 0;
				}

				if(c == 0)
				{
					c = 50;
					GYROSCOPE_measure(&datas);
					if(datas.Gyroscope_X > 2500 || datas.Gyroscope_Y > 2500 || datas.Gyroscope_Z > 2500 || datas.Gyroscope_X < -2500 || datas.Gyroscope_Y < -2500 || datas.Gyroscope_Z < -2500) {
						shake_counter ++;
					}
				}


				if(shake_counter != 5 && !activation_time_remaning){
					if(!a){
						srand(ADC_getValue(ADC_8));
						a = (uint32_t)(rand() % 1800 + 200);
						if(a%2) modifyLogoInitialiation(getAnimation(game), 'n');
						else modifyLogoInitialiation(getAnimation(game), 'h');
					}
				}

				if(shake_counter == 5 && !activation_time_remaning) {
					timer_counter = 0;
					a = 3000;
					activation_time_remaning = 1;
				}
				if(activation_time_remaning && timer_counter == 1) decounterSkake3(getAnimation(game));
				if(activation_time_remaning && timer_counter == 2) decounterSkake2(getAnimation(game));
				if(activation_time_remaning && timer_counter == 3) decounterSkake1(getAnimation(game));
				if(activation_time_remaning && timer_counter == 4) {
					ACCELEROMETER_measure(&datas);
					setThreesholdsDirection(game, datas.Accelerometer_X, datas.Accelerometer_Y);
					state = PLAY_A_GAME;
				}

				printVector(getAnimation(game));

				break;
			case PLAY_A_GAME:
				if(entrance)
				{
					snakeSpawn(game);
					appleSpawn(game);
				}

				if(a == 0) {
					a = 250;
					ACCELEROMETER_measure(&datas);
					setSnakeDirection(game, &datas);
					snakeDeplacement(game);
					if(isAppleEaten(game) == true){
						appleSpawn(game);
						snakeEatApple(game);
					}
				}

				if(isDead(game)) state = GAMEOVER;

				printGame(game);
				break;
			case GAMEOVER:
				if(entrance){
					setSnakeScore(game, getVectorLength(getSnake(game)));
					gameoverScreen(getAnimation(game));

					if((uint32_t)(getSnakeScore(game)) > FLASH_read_word(0)) FLASH_set_word(0, (uint32_t)(getSnakeScore(game)));

					c = 5000;
					a = 2000;
				}

				if(!a){
					scoreScreen(getAnimation(game), getSnakeScore(game));
				}

				if(a || c) printVector(getAnimation(game));

				if(!c) {
					state = SHAKE_TO_START;
					freeGame(game);
				}
				break;
			default:
				break;
		}
}

void process_ms(void)
{
	if(t)
		t--;
	if(a) {
		if(a == 3000 || a == 2000 || a == 1000 || a == 1) timer_counter++;
		a--;
	}
	if(c)
		c--;


}
