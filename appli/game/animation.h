/*
 * animation.h
 *
 *  Created on: 19 déc. 2021
 *      Author: theof
 */

#ifndef INITIALISATION_H_
#define INITIALISATION_H_
#include "../utils/vector.h"

void wallCreation(vector_t *wall);
void logoInitialisation(vector_t *logo, uint32_t wr);
void decounterSkake3(vector_t *decounter);
void decounterSkake2(vector_t *decounter);
void decounterSkake1(vector_t *decounter);
void gameoverScreen(vector_t *screen);
void scoreScreen(vector_t *screen, uint16_t score);

void addZeroScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addOneScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addTwoScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addThreeScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addFourScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addFiveScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addSixScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addSevenScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addEightScore(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addNineScore(vector_t *screen, int8_t offset_x, int8_t offset_y);

void addZeroWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addOneWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addTwoWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addThreeWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addFourWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addFiveWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addSixWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addSevenWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addEightWR(vector_t *screen, int8_t offset_x, int8_t offset_y);
void addNineWR(vector_t *screen, int8_t offset_x, int8_t offset_y);

#endif /* ANIMATION_H_ */
