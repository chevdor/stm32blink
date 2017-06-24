/*
 * blink.c
 *
 *  Created on: 24 Jun 2017
 *      Author: will
 */
#include "blink.h"

void bleep(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint32_t length, int count ) {
	for (int i=0; i<count; i++) {
		HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
		HAL_Delay(length);
		HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
		HAL_Delay(length/2);
	}
	HAL_Delay(length*2);
}
