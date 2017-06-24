/*
 * Blinker.h
 *
 *  Created on: 24 Jun 2017
 *      Author: will
 */

#ifndef SRC_BLINKER_H_
#define SRC_BLINKER_H_
#include "stm32f4xx_hal.h"

namespace playground {

class Blinker {
public:
	GPIO_TypeDef* GPIOx;
	uint16_t GPIO_Pin;

	Blinker(GPIO_TypeDef*, uint16_t);
	virtual ~Blinker();

	void bleep( uint32_t, int);
};

} /* namespace playground */

#endif /* SRC_BLINKER_H_ */
