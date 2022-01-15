/*
 * vector.h
 *
 *  Created on: 19 déc. 2021
 *      Author: theof
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include "matrix_led_32_32.h"
#include <stdbool.h>
#include "macro_types.h"

typedef struct {
	bool visible;
	uint8_t position_y;
	uint8_t position_x;
	color_t color;
} pixel_t;

typedef struct {
	uint16_t taille;
	uint16_t capacite;
	pixel_t *array;
} vector_t;

vector_t newVector(uint16_t capacite);
void newVector2(vector_t *vector, uint16_t capacite);
pixel_t newPixel(uint8_t position_y, uint8_t position_x, color_t color);
void setColorPixel(pixel_t *pixel, color_t color);
void setPositionsPixel(pixel_t *pixel, uint8_t position_x, uint8_t position_y);
void setPositionXPixel(pixel_t *pixel, uint8_t position_x);
void setPositionYPixel(pixel_t *pixel, uint8_t position_y);
void addPixelToVector(vector_t *vector, pixel_t pixel);
void setPixel(vector_t *vector, pixel_t *pixel, uint16_t position);
bool_e isPixelVisible(pixel_t *pixel);
pixel_t *getPixel(vector_t *vector, uint16_t position);
uint8_t getPositionXPixel(pixel_t *pixel);
uint8_t getPositionYPixel(pixel_t *pixel);
pixel_t *getLast(vector_t *vector);
pixel_t *getFirst(vector_t *vector);
color_t getPixelColor(pixel_t *pixel);
uint16_t getVectorLength(vector_t *vector);
void setPixelStatus(pixel_t *pixel, bool status);
void filterColor(vector_t *vector, bool type, color_t color);
void filterColumnMinMax(vector_t *vector, uint8_t column_min, uint8_t column_max);

#endif /* VECTOR_H_ */
