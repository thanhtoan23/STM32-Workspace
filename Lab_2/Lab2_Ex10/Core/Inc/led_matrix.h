#ifndef LED_MATRIX_H_
#define LED_MATRIX_H_

#include <stdint.h>
#include "main.h"

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];
extern uint8_t row_map[8];

void updateLEDMatrix(int index);
void shiftMatrixLeft(void);

#endif /* LED_MATRIX_H_ */
