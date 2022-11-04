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


#define SENSOR1_READING              ADC_CHANNEL_0
#define SENSOR2_READING              ADC_CHANNEL_1
#define SENSOR3_READING              ADC_CHANNEL_2
#define SENSOR4_READING              ADC_CHANNEL_3
#define SENSOR5_READING              ADC_CHANNEL_4



void H_Flex_Sensor_Void_SenosorInit(void);
u8 H_Flex_Sensor_U8_SenosorRead(u8);

#endif /* HAL_FLEX_SENSOR_FLEX_SENSOR_INTERFACE_H_ */




