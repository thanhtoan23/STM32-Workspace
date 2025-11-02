#ifndef LED_MATRIX_H_
#define LED_MATRIX_H_

#include <stdint.h>
#include "main.h"

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];

void displayMatrix(uint8_t byt);
void moverLetter(void);
void updateLEDMatrix(int index);

#endif /* LED_MATRIX_H_ */
