/*
 * DCMotor_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */


#include "DCMotor_Interface.h"

void H_DCMotor_Void_DCMotorInit(void)
{
	M_DIO_Void_SetPinDirection(DC_MOTOR_PIN1,OUTPUT);
	M_DIO_Void_SetPinDirection(DC_MOTOR_PIN2,OUTPUT);
	M_DIO_Void_SetPinDirection(DC_MOTOR_PIN3,OUTPUT);
	M_DIO_Void_SetPinDirection(DC_MOTOR_PIN4,OUTPUT);
	M_Timer_Void_PWMSetFreaquancy(60);
	M_Timer_Void_PWMInit(TIMER1_CHANNEL);
}
void H_DCMotor_Void_DCMotorSetSpeed(u32 Copy_U32_MotorSpeed)
{
	M_Timer_Void_PWMSetDutyCycle(TIMER1_CHANNEL,Copy_U32_MotorSpeed);
}
void H_DCMotor_Void_DCMotorSetDirection(u8 Copy_U8_Direction)
{
switch(Copy_U8_Direction)
{
case ACW:
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN1,LOW);
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN2,HIGH);
	break;
case CW:
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN1,HIGH);
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN2,LOW);
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN3,HIGH);
	M_DIO_Void_SetPinValue(DC_MOTOR_PIN4,LOW);
	break;
}
}
//void H_DCMotor_Void_DCMotor2SetDirection(u8 Copy_U8_Direction)
//{
//switch(Copy_U8_Direction)
//{
//case ACW2:
//	M_DIO_Void_SetPinValue(DC_MOTOR_PIN3,LOW);
//	M_DIO_Void_SetPinValue(DC_MOTOR_PIN4,HIGH);
//	break;
//case CW2:
//	M_DIO_Void_SetPinValue(DC_MOTOR_PIN3,HIGH);
//	M_DIO_Void_SetPinValue(DC_MOTOR_PIN4,LOW);
//	break;
//}
//}
void H_DCMotor_Void_DCMotorStart(void)
{
	M_Timer_Void_PWMStart(TIMER1_CHANNEL);

}
void H_DCMotor_Void_DCMotorStop(void)
{
	M_Timer_Void_PWMStop(TIMER1_CHANNEL);
}

