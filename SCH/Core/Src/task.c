/*
 * task.c
 *
 *  Created on: Nov 30, 2023
 *      Author: ASUS
 */
#include "task.h"

void Red_Blinky(void) {
	HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
}

void Green_Blinky(void) {
	HAL_GPIO_TogglePin(GREEN_GPIO_Port, GREEN_Pin);
}

void Yellow_Blinky(void) {
	HAL_GPIO_TogglePin(YELLOW_GPIO_Port, YELLOW_Pin);
}

void Green1_Blinky(void) {
	HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
}

void Yellow1_Blinky(void) {
	HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
}
