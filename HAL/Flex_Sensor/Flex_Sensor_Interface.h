/*
 * Flex_Sensor_Interface.h
 *
 *  Created on: 14 Oct 2022
 *      Author: DELL G3
 */

#ifndef HAL_FLEX_SENSOR_FLEX_SENSOR_INTERFACE_H_
#define HAL_FLEX_SENSOR_FLEX_SENSOR_INTERFACE_H_

#include "DIO_Interface.h"
#include "ADC_Interface.h"
#include "Flex_Sensor_Config.h"



void H_Flexible_SensorInit(void);
u8 u8_Read_Flexible_Sensor(u8);

#endif /* HAL_FLEX_SENSOR_FLEX_SENSOR_INTERFACE_H_ */




