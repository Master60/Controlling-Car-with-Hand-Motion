/*
 * Flex_Sensor_Prog.c
 *
 *  Created on: 14 Oct 2022
 *      Author: DELL G3
 */

#include "Flex_Sensor_Interface.h"

void H_Flexible_SensorInit(void)
{
	M_ADC_Void_ADCInit();
}

u8 u8_Read_Flexible_Sensor(u8 Copy_U8_Sensor)
{
	u8 Local_U8_SensorReading = 0;
	switch (Copy_U8_Sensor)
{
	case SENSOR1_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(0);break;
	case SENSOR2_READING:
		 Local_U8_SensorReading = M_ADC_U16_ADCRead(1);break;

default:break;
}
	return Local_U8_SensorReading;
}
