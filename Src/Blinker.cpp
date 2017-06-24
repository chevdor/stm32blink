/*
 * Blinker.cpp
 *
 *  Created on: 24 Jun 2017
 *      Author: will
 */

#include "Blinker.h"
#include "stm32f4xx_hal.h"

namespace playground {

Blinker::Blinker(GPIO_TypeDef* x, uint16_t pin) {
	this->GPIOx = x;
	this->GPIO_Pin = pin;
}

Blinker::~Blinker() {
	// TODO Auto-generated destructor stub
}

void Blinker::bleep( uint32_t length, int count) {
	for (int i=0; i<count; i++) {
			HAL_GPIO_TogglePin(this->GPIOx, this->GPIO_Pin);
			HAL_Delay(length);
			HAL_GPIO_TogglePin(this->GPIOx, this->GPIO_Pin);
			HAL_Delay(length/2);
		}
		HAL_Delay(length*2);
}


} /* namespace playground */

