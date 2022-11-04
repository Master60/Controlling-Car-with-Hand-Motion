/*
 * Buzzer_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Buzzer_Interface.h"

void H_Buzzer_Void_BuzzerInit(void)
{
	M_DIO_Void_SetPinDirection(BUZZER_PIN,OUTPUT);
}
void H_Buzzer_Void_BuzzerSetOn(void)
{
	M_DIO_Void_SetPinValue(BUZZER_PIN,HIGH);
}
void H_Buzzer_Void_BuzzerSetOff(void)
{
	M_DIO_Void_SetPinValue(BUZZER_PIN,LOW);
}
void H_Buzzer_Void_BuzzerOnce(void)
{
	M_DIO_Void_SetPinValue(BUZZER_PIN,HIGH);
	_delay_ms(BUZZER_TIME_ON);
	M_DIO_Void_SetPinValue(BUZZER_PIN,LOW);
}
