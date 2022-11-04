/*
 * Flex_Sensor_Prog.c
 *
 *  Created on: 14 Oct 2022
 *      Author: DELL G3
 */

#include "Flex_Sensor_Interface.h"

void H_Flex_Sensor_Void_SenosorInit(void)
{
	M_ADC_Void_ADCInit();
}

u8 H_Flex_Sensor_U8_SenosorRead(u8 Copy_U8_Sensor)
{
	u8 Local_U8_SensorReading = 0;
	switch (Copy_U8_Sensor)
{
	case SENSOR1_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(0);break;
	case SENSOR2_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(1);break;
	case SENSOR3_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(2);break;
	case SENSOR4_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(3);break;
	case SENSOR5_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(4);break;
default:break;
}
	return Local_U8_SensorReading;
}
