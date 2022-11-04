/*
 * Stepper_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */


#include "Stepper_Interface.h"

void H_Stepper_Void_StepperInit(void)
{
	M_DIO_Void_SetPinDirection(STEPPER_PIN1,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN2,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN3,OUTPUT);
	M_DIO_Void_SetPinDirection(STEPPER_PIN4,OUTPUT);
}
void H_Stepper_Void_StepperStart(u8 Copy_U8_Degrees)
{
	u8 Local_U8_Counter = 0;
	for(Local_U8_Counter = 0;Local_U8_Counter < Copy_U8_Degrees ;Local_U8_Counter++)
	{
		M_DIO_Void_SetPinValue(STEPPER_PIN1,HIGH);
		M_DIO_Void_SetPinValue(STEPPER_PIN2,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN3,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN4,LOW);
		_delay_ms(5);
		M_DIO_Void_SetPinValue(STEPPER_PIN1,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN2,HIGH);
		M_DIO_Void_SetPinValue(STEPPER_PIN3,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN4,LOW);
		_delay_ms(5);
		M_DIO_Void_SetPinValue(STEPPER_PIN1,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN2,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN3,HIGH);
		M_DIO_Void_SetPinValue(STEPPER_PIN4,LOW);
		_delay_ms(5);
		M_DIO_Void_SetPinValue(STEPPER_PIN1,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN2,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN3,LOW);
		M_DIO_Void_SetPinValue(STEPPER_PIN4,HIGH);
		_delay_ms(5);
	}
}
