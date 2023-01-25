/*
 * Servo_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Servo_Interface.h"

void H_Servo_Void_ServoInit(void)
{
	M_Timer_Void_PWMInit(TIMER0_CHANNEL);
	M_Timer_Void_PWMSetFreaquancy(50);
}
void H_Servo_Void_ServoSetAngle(s16 Copy_U8_Angle)
{
	f32 Local_F32_Value = ((Copy_U8_Angle * 5.0 ) / 180.0) + 5.0;
	M_Timer_Void_PWMSetDutyCycle(TIMER0_CHANNEL,Local_F32_Value);
}
void H_Servo_Void_ServoSetStart(void)
{
	M_Timer_Void_PWMStart(TIMER0_CHANNEL);
}
void H_Servo_Void_ServoSetStop(void)
{
M_Timer_Void_PWMStop(TIMER0_CHANNEL);
}
