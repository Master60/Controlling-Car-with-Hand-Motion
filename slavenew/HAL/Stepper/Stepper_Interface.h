/*
 * Stepper_Interface.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef HAL_STEPPER_STEPPER_INTERFACE_H_
#define HAL_STEPPER_STEPPER_INTERFACE_H_

#include "Stepper_Config.h"
#include "DIO_Interface.h"
#include "STD.h"
#include <util/delay.h>

void H_Stepper_Void_StepperInit(void);
void H_Stepper_Void_StepperStart(u8);

#endif /* HAL_STEPPER_STEPPER_INTERFACE_H_ */
