/*
 * vector.c
 *
 *  Created on: 19 déc. 2021
 *      Author: theof
 */

#include <stdlib.h>
#include "vector.h"

vector_t newVector(uint16_t capacite){
	vector_t vector;
	vector.array = malloc((uint16_t)(capacite + 1) * sizeof(*vector.array));
	vector.taille = 0;
	vector.capacite = capacite;
	return vector;
}

void newVectorP(vector_t *vector, uint16_t capacite){
	vector->array = malloc((uint16_t)(capacite + 1) * sizeof(*vector->array));
	vector->taille = 0;
	vector->capacite = capacite;
}

void resetVector(vector_t *vector){
	vector->taille = 0;
}

pixel_t newPixel(uint8_t position_x, uint8_t position_y, color_t color){
	pixel_t pixel;
	pixel.visible = 1;

	if(position_x > 31)	pixel.position_x = 31;
	else pixel.position_x = position_x;

	if(position_y > 31)	pixel.position_y = 31;
	else pixel.position_y = position_y;


	pixel.color = color;

	return pixel;
}

void newPixelP(pixel_t *pixel, uint8_t position_x, uint8_t position_y, color_t color){
	pixel->visible = 1;

	if(position_x > 31)	pixel->position_x = 31;
	else pixel->position_x = position_x;

	if(position_y > 31)	pixel->position_y = 31;
	else pixel->position_y = position_y;

	pixel->color = color;
}

void setColorPixel(pixel_t *pixel, color_t color){
	pixel->color = color;
}

void setPositionsPixel(pixel_t *pixel, uint8_t position_x, uint8_t position_y){
	if(position_x > 31)	pixel->position_x = 31;
	else pixel->position_x = position_x;

	if(position_y > 31)	pixel->position_y = 31;
	else pixel->position_y = position_y;
}

void setPositionXPixel(pixel_t *pixel, uint8_t position_x){
	if(position_x > 31)	pixel->position_x = 31;
		else pixel->position_x = position_x;
}

void setPositionYPixel(pixel_t *pixel, uint8_t position_y){
	if(position_y > 31)	pixel->position_y = 31;
	else pixel->position_y = position_y;
}

void addPixelToVector(vector_t *vector, pixel_t pixel){
	if(vector->taille < vector->capacite){
		setPixel(vector, &pixel, vector->taille++);
	} else {
		pixel_t alertNoFreeSpace = newPixel(31, 31, COLOR_RED);
		setPixel(vector, &alertNoFreeSpace, vector->taille++);
	}
}

void addPixelToVectorP(vector_t *vector, pixel_t *pixel){
	if(vector->taille < vector->capacite){
		setPixel(vector, pixel, vector->taille++);
	} else {
		pixel_t alertNoFreeSpace = newPixel(31, 31, COLOR_RED);
		setPixel(vector, &alertNoFreeSpace, vector->taille++);
	}
}

void setPixel(vector_t *vector, pixel_t *pixel, uint16_t position){
	if(position <= vector->taille) vector->array[position] = *pixel;
}

void setPixelVisibility(pixel_t *pixel, bool_e status){
	pixel->visible = status;
}

bool_e isPixelVisible(pixel_t *pixel){
	return pixel->visible == 1;
}
pixel_t *getPixel(vector_t *vector, uint16_t position){
	return &vector->array[position];
}

pixel_t *getLast(vector_t *vector){
	return getPixel(vector, vector->taille);
}

pixel_t *getFirst(vector_t *vector){
	return getPixel(vector, 0);
}

uint8_t getPositionXPixel(pixel_t *pixel){
	return pixel->position_x;
}

uint8_t getPositionYPixel(pixel_t *pixel){
	return pixel->position_y;
}

color_t getPixelColor(pixel_t *pixel){
	return pixel->color;
}

pixel_t *getPixelWithPos(vector_t *vector, uint8_t position_x, uint8_t position_y){
	for(uint16_t index = 0; index < getVectorLength(vector); index ++){
		pixel_t *pixel = getPixel(vector, index);
		if(getPositionXPixel(pixel) == position_x && getPositionYPixel(pixel) == position_y) return pixel;
	}
	return getFirst(vector);
}

uint16_t getVectorLength(vector_t *vector){
	return vector->taille;
}

void filterColor(vector_t *vector, bool type, color_t color){
	for(uint16_t i = 0; i < vector->taille; i++){
		if(type == 1 && vector->array[i].color != color) setPixelVisibility(getPixel(vector, i), 0);
		else if (type == 0 && vector->array[i].color == color) setPixelVisibility(getPixel(vector, i), 0);
	}
}

void filterColumnMinMax(vector_t *vector, uint8_t column_min, uint8_t column_max){
	for(uint16_t i = 0; i < vector->taille; i++) if(getPixel(vector, i)->position_x <= column_min && getPixel(vector, i)->position_x >= column_max ) setPixelVisibility(&vector->array[i], 0);
}
