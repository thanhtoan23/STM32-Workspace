#include "led_matrix.h"
#include "main.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
//uint8_t matrix_buffer[8] = {0xE7, 0xE7, 0xDB, 0xDB, 0xC3, 0xBD, 0xBD, 0xBD};
uint8_t matrix_buffer[8] = {0xE7, 0xE7, 0xDB, 0xDB, 0x81, 0xBD, 0x7E, 0x7E};
uint8_t row_map[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};

void updateLEDMatrix(int index){
	switch (index){
	case 0:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 1:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 2:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 3:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 4:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 5:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 6:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	case 7:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	default:
		HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, !(row_map[index] & 1 << 0));
		HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, !(row_map[index] & 1 << 1));
		HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, !(row_map[index] & 1 << 2));
		HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, !(row_map[index] & 1 << 3));
		HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, !(row_map[index] & 1 << 4));
		HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, !(row_map[index] & 1 << 5));
		HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, !(row_map[index] & 1 << 6));
		HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, !(row_map[index] & 1 << 7));

		HAL_GPIO_WritePin(ENM_0_GPIO_Port, ENM_0_Pin, (matrix_buffer[index] >> 7) & 1);
		HAL_GPIO_WritePin(ENM_1_GPIO_Port, ENM_1_Pin, (matrix_buffer[index] >> 6) & 1);
		HAL_GPIO_WritePin(ENM_2_GPIO_Port, ENM_2_Pin, (matrix_buffer[index] >> 5) & 1);
		HAL_GPIO_WritePin(ENM_3_GPIO_Port, ENM_3_Pin, (matrix_buffer[index] >> 4) & 1);
		HAL_GPIO_WritePin(ENM_4_GPIO_Port, ENM_4_Pin, (matrix_buffer[index] >> 3) & 1);
		HAL_GPIO_WritePin(ENM_5_GPIO_Port, ENM_5_Pin, (matrix_buffer[index] >> 2) & 1);
		HAL_GPIO_WritePin(ENM_6_GPIO_Port, ENM_6_Pin, (matrix_buffer[index] >> 1) & 1);
		HAL_GPIO_WritePin(ENM_7_GPIO_Port, ENM_7_Pin, (matrix_buffer[index] >> 0) & 1);
		break;
	}
}
