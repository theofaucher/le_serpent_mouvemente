/*
 * end.c
 *
 *  Created on: 4 janv. 2022
 *      Author: ferre
 */

#include "end.h"
#include "matrix_led_32_32.h"

vector_t end(void){
	vector_t theEnd = newVector(100);

	// LE D
	addPixelToVector(&theEnd, newPixel(1, 2, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(1, 3, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(1, 4, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(1, 19, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(1, 20, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(1, 21, COLOR_WHITE));

	for(uint8_t index = 2; index < 22 ; index++){
			addPixelToVector(&theEnd, newPixel(2, index, COLOR_GREEN));
			addPixelToVector(&theEnd, newPixel(3, index, COLOR_GREEN));
	}
	for(uint8_t index = 2; index < 5 ; index++){
				addPixelToVector(&theEnd, newPixel(4, index, COLOR_GREEN));
				addPixelToVector(&theEnd, newPixel(5, index, COLOR_GREEN));
				addPixelToVector(&theEnd, newPixel(6, index, COLOR_GREEN));
				addPixelToVector(&theEnd, newPixel(7, index, COLOR_GREEN));

		}
	for(uint8_t index = 19; index < 22 ; index++){
					addPixelToVector(&theEnd, newPixel(4, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(5, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(6, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(7, index, COLOR_GREEN));

			}

	for(uint8_t index = 3; index < 21 ; index++){
				addPixelToVector(&theEnd, newPixel(8, index, COLOR_GREEN));
				addPixelToVector(&theEnd, newPixel(9, index, COLOR_GREEN));
	}

	//LE I
	for(uint8_t index = 2; index < 7 ; index++){
					addPixelToVector(&theEnd, newPixel(13, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(14, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(18, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(19, index, COLOR_GREEN));
			}

	for(uint8_t index = 17; index <22  ; index++){
						addPixelToVector(&theEnd, newPixel(13, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(14, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(18, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(19, index, COLOR_GREEN));
				}

	for(uint8_t index = 2; index < 22 ; index++){
					addPixelToVector(&theEnd, newPixel(15, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(16, index, COLOR_GREEN));
					addPixelToVector(&theEnd, newPixel(17, index, COLOR_GREEN));
		}

	//LE E

	for(uint8_t index = 2; index < 22 ; index++){
						addPixelToVector(&theEnd, newPixel(23, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(24, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(25, index, COLOR_GREEN));
			}

	for(uint8_t index = 2; index < 5 ; index++){
						addPixelToVector(&theEnd, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(27, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(28, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(29, index, COLOR_GREEN));
			}
	for(uint8_t index = 10; index < 14 ; index++){
						addPixelToVector(&theEnd, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(27, index, COLOR_GREEN));
				}
	for(uint8_t index = 19; index < 22 ; index++){
						addPixelToVector(&theEnd, newPixel(26, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(27, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(28, index, COLOR_GREEN));
						addPixelToVector(&theEnd, newPixel(29, index, COLOR_GREEN));
				}

	// Partie Jaune (3D)

	for(uint8_t index = 1; index < 8 ; index++){
						addPixelToVector(&theEnd, newPixel(index, 1, COLOR_YELLOW));
					}
	for(uint8_t index = 5; index < 19 ; index++){
							addPixelToVector(&theEnd, newPixel(4, index, COLOR_YELLOW));
						}

	addPixelToVector(&theEnd, newPixel(8, 1, COLOR_YELLOW));
	addPixelToVector(&theEnd, newPixel(9, 1, COLOR_YELLOW));

	for(uint8_t index = 2; index < 22 ; index++){
								addPixelToVector(&theEnd, newPixel(10, index, COLOR_YELLOW));
							}

	addPixelToVector(&theEnd, newPixel(8, 21, COLOR_YELLOW));
	addPixelToVector(&theEnd, newPixel(9, 21, COLOR_YELLOW));

	//LE I (3D)
	for(uint8_t index = 13; index < 20 ; index++){
									addPixelToVector(&theEnd, newPixel(index, 1, COLOR_YELLOW));
								}

	for(uint8_t index = 1; index < 8 ; index++){
									addPixelToVector(&theEnd, newPixel(20, index, COLOR_YELLOW));
								}

	addPixelToVector(&theEnd, newPixel(19, 7, COLOR_YELLOW));

	for(uint8_t index = 7; index < 18 ; index++){
										addPixelToVector(&theEnd, newPixel(18, index, COLOR_YELLOW));
									}

	addPixelToVector(&theEnd, newPixel(19, 16, COLOR_YELLOW));

	for(uint8_t index = 16; index < 22 ; index++){
											addPixelToVector(&theEnd, newPixel(20, index, COLOR_YELLOW));
										}

	// LE E (3D)
	for(uint8_t index = 23; index < 30 ; index++){
										addPixelToVector(&theEnd, newPixel(index, 1, COLOR_YELLOW));
									}

	for(uint8_t index = 1; index < 5 ; index++){
										addPixelToVector(&theEnd, newPixel(30, index, COLOR_YELLOW));
									}

	for(uint8_t index = 27; index < 31 ; index++){
											addPixelToVector(&theEnd, newPixel(index, 5, COLOR_YELLOW));
										}

	for(uint8_t index = 5; index < 10 ; index++){
											addPixelToVector(&theEnd, newPixel(26, index, COLOR_YELLOW));
										}

	addPixelToVector(&theEnd, newPixel(27, 9, COLOR_YELLOW));

	for(uint8_t index = 9; index < 15 ; index++){
												addPixelToVector(&theEnd, newPixel(28, index, COLOR_YELLOW));
											}

	addPixelToVector(&theEnd, newPixel(27, 14, COLOR_YELLOW));

	for(uint8_t index = 14; index < 19 ; index++){
												addPixelToVector(&theEnd, newPixel(26, index, COLOR_YELLOW));
											}

	addPixelToVector(&theEnd, newPixel(27, 18, COLOR_YELLOW));
	addPixelToVector(&theEnd, newPixel(28, 14, COLOR_YELLOW));
	addPixelToVector(&theEnd, newPixel(29, 14, COLOR_YELLOW));

	for(uint8_t index = 18; index < 22 ; index++){
											addPixelToVector(&theEnd, newPixel(30, index, COLOR_YELLOW));
										}
	/*Pour faire l'anim du bas
	for(uint8_t i = 1; i < 12; i++){
		x = addPixelToVector(&theEnd, newPixel(2+i, 26+i, COLOR_YELLOW));
	}


	//LE E
	for(uint8_t index = 26; index < 31 ; index++){
												addPixelToVector(&theEnd, newPixel(2, index, COLOR_WHITE));
											}
	addPixelToVector(&theEnd, newPixel(3, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(3, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(3, 30, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(4, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(4, 30, COLOR_WHITE));

	//LE N
	for(uint8_t index = 26; index < 31 ; index++){
													addPixelToVector(&theEnd, newPixel(6, index, COLOR_WHITE));
												}

	for(uint8_t index = 26; index < 31 ; index++){
													addPixelToVector(&theEnd, newPixel(9, index, COLOR_WHITE));
												}

	addPixelToVector(&theEnd, newPixel(7, 27, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(7, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(8, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(8, 29, COLOR_WHITE));

	//LE D
	for(uint8_t index = 26; index < 31 ; index++){
													addPixelToVector(&theEnd, newPixel(11, index, COLOR_WHITE));
													}

	addPixelToVector(&theEnd, newPixel(12, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(12, 30, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(13, 27, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(13, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(13, 29, COLOR_WHITE));

	//LE R
	for(uint8_t index = 26; index < 31 ; index++){
													addPixelToVector(&theEnd, newPixel(17, index, COLOR_WHITE));
														}

	addPixelToVector(&theEnd, newPixel(18, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(19, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(19, 27, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(19, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(18, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(18, 29, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(19, 30, COLOR_WHITE));

	//LE E

	for(uint8_t index = 26; index < 31 ; index++){
													addPixelToVector(&theEnd, newPixel(21, index, COLOR_WHITE));
												}
	addPixelToVector(&theEnd, newPixel(22, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(22, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(22, 30, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(23, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(23, 30, COLOR_WHITE));

	//LE S
	addPixelToVector(&theEnd, newPixel(25, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(26, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(25, 27, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(25, 28, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(26, 28, COLOR_WHITE));

	addPixelToVector(&theEnd, newPixel(26, 29, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(26, 30, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(25, 30, COLOR_WHITE));

	//LE T
	addPixelToVector(&theEnd, newPixel(28, 26, COLOR_WHITE));
	addPixelToVector(&theEnd, newPixel(30, 26, COLOR_WHITE));

	for(uint8_t index = 26; index < 31 ; index++){
														addPixelToVector(&theEnd, newPixel(29, index, COLOR_WHITE));
													}


	//FIN


	addPixelToVector(&logo, newPixel(2, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 13, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(3, 12, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(2, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(1, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(5, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(5, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(7, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(4, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(5, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(6, 11, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(9, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(9, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(10, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(11, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(12, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(14, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(14, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(14, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(17, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(16, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(15, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(19, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(19, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(22, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(21, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(20, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(21, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(22, 10, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(24, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(24, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(24, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 10, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(27, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(25, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(26, 8, COLOR_WHITE));

	addPixelToVector(&logo, newPixel(28, 4, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(29, 5, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 6, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 7, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 8, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 9, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(28, 12, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(29, 11, COLOR_WHITE));
	addPixelToVector(&logo, newPixel(30, 10, COLOR_WHITE));

	for(uint8_t index = 5; index < 28; index++){
		addPixelToVector(&logo, newPixel(index, 3, COLOR_WHITE));
		addPixelToVector(&logo, newPixel(index, 13, COLOR_WHITE));
	}

	for(uint8_t index = 4; index < 28; index++){
		addPixelToVector(&logo, newPixel(index, 4, COLOR_RED));
		addPixelToVector(&logo, newPixel(index, 12, COLOR_RED));
	}

	for(uint8_t index = 8; index < 29; index++) addPixelToVector(&logo, newPixel(index, 5, COLOR_RED));
	for(uint8_t index = 7; index < 29; index++) addPixelToVector(&logo, newPixel(index, 11, COLOR_RED));

	for(uint8_t index = 6; index < 11; index++) {
		 addPixelToVector(&logo, newPixel(2, index, COLOR_RED));
		 addPixelToVector(&logo, newPixel(29, index, COLOR_RED));
	}

	for(uint8_t index = 5; index < 12; index++){
		addPixelToVector(&logo, newPixel(3, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(28, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(&logo, newPixel(8, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(13, index, COLOR_RED));
	}

	for(uint8_t index = 6; index < 12; index++){
		addPixelToVector(&logo, newPixel(18, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(23, index, COLOR_RED));
	}

	addPixelToVector(&logo, newPixel(7, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(7, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(7, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(6, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(5, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 5, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(4, 10, COLOR_RED));

	addPixelToVector(&logo, newPixel(12, 6, COLOR_RED));
	for(uint8_t index = 7; index < 11; index++){
		addPixelToVector(&logo, newPixel(10, index, COLOR_RED));
		addPixelToVector(&logo, newPixel(11, index, COLOR_RED));
	}

	addPixelToVector(&logo, newPixel(17, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(14, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(15, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(16, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(14, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(15, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(16, 7, COLOR_RED));

	addPixelToVector(&logo, newPixel(21, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(20, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(21, 10, COLOR_RED));
	addPixelToVector(&logo, newPixel(21, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 8, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(22, 9, COLOR_RED));

	addPixelToVector(&logo, newPixel(24, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(27, 6, COLOR_RED));
	addPixelToVector(&logo, newPixel(25, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(26, 7, COLOR_RED));
	addPixelToVector(&logo, newPixel(25, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(26, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(27, 9, COLOR_RED));
	addPixelToVector(&logo, newPixel(24, 10, COLOR_RED));
	*/

	return theEnd;
}
