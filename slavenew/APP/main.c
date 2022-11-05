/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects.h"
#define TRANSMIT (0)
#define RECEIVE (3)
#define MOTORWORK (1)
#define MOTORTEST (85)
#define DIGITAL    (6)
//void A_EXT_INT0_Execution(void);
//void A_Timer0_Execution(void);

int main()
{
//	M_UART_Void_UARTInit();
//	H_Flex_Sensor_Void_SenosorInit();
//	H_Buzzer_Void_BuzzerInit();
//	H_DCMotor_Void_DCMotorInit();
//	H_Servo_Void_ServoInit();
//	H_LCD_Void_LCDInit();
//
//	u8 DATA_U8_SENT = 0;
//
//	while(1)
//	{
//		DATA_U8_SENT=M_UART_Void_UARTRec();
//
//		switch (DATA_U8_SENT) {
//			case 'R':
//				H_Buzzer_Void_BuzzerOnce();
//				H_Servo_Void_ServoSetAngle(-90);
//				H_DCMotor_Void_DCMotorStart();
//				H_Servo_Void_ServoSetStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'L':
//				H_Buzzer_Void_BuzzerOnce();
//				H_Servo_Void_ServoSetAngle(180);
//				H_DCMotor_Void_DCMotorStart();
//				H_Servo_Void_ServoSetStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'F':
//				H_Buzzer_Void_BuzzerOnce();
//				H_DCMotor_Void_DCMotorSetDirection(CW);
//				H_DCMotor_Void_DCMotorStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'B':
//				H_Buzzer_Void_BuzzerOnce();
//				H_DCMotor_Void_DCMotorSetDirection(ACW);
//				H_DCMotor_Void_DCMotorStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'I':
//				H_Buzzer_Void_BuzzerOnce();
//				H_DCMotor_Void_DCMotorSetSpeed(100);
//				H_DCMotor_Void_DCMotorStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'D':
//				H_Buzzer_Void_BuzzerOnce();
//				H_DCMotor_Void_DCMotorSetSpeed(50);
//				H_DCMotor_Void_DCMotorStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'O':
//				H_Buzzer_Void_BuzzerOnce();
//				H_Servo_Void_ServoSetAngle(90);
//				H_DCMotor_Void_DCMotorStart();
//				H_Servo_Void_ServoSetStart();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			case 'S':
//				H_DCMotor_Void_DCMotorStop();
//				H_LCD_Void_LCDWriteCharacter(DATA_U8_SENT);
//				break;
//			default:
//				break;
//		}
//	}
//}
//
//
//
//M_UART_Void_UARTInit();
// H_Flex_Sensor_Void_SenosorInit();
// H_LCD_Void_LCDInit();
//
#if DIGITAL   == 4
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\




#endif

#if MOTORTEST == 8
H_DCMotor_Void_DCMotorInit();
H_LCD_Void_LCDInit();
M_UART_Void_UARTInit();
H_LED_Void_LedInit(LED0);
H_LED_Void_LedInit(LED1);
H_LED_Void_LedInit(LED2);
M_UART_Void_UARTSetBaudRate(9600);
	while(1)
		{
		u8 var = M_UART_Void_UARTRecBlock();
		H_LCD_Void_LCDWriteNumber(var);
		    if(var==5)
		    {
		    H_DCMotor_Void_DCMotorSetDirection(CW);

		    H_DCMotor_Void_DCMotorStart();
			H_LED_Void_LedSetOn(LED0);
			H_DCMotor_Void_DCMotorSetSpeed(70);
			_delay_ms(3000);
			H_LED_Void_LedSetOff(LED0);
			H_LED_Void_LedSetOn(LED1);
			H_DCMotor_Void_DCMotorSetSpeed(100);
			_delay_ms(3000);
			H_LED_Void_LedSetOff(LED1);
			H_LED_Void_LedSetOn(LED2);
			H_DCMotor_Void_DCMotorSetSpeed(800);
			_delay_ms(3000);
			H_LED_Void_LedSetOff(LED2);
		    }
		}


#endif


#if MOTORWORK == 2
	H_LCD_Void_LCDInit();
	H_LED_Void_LedInit(LED0);
	H_LED_Void_LedInit(LED1);
	H_LED_Void_LedInit(LED2);
	H_DCMotor_Void_DCMotorInit();
	H_DCMotor_Void_DCMotorSetDirection(CW);
	H_DCMotor_Void_DCMotorStart();
	while(1)
	{
		H_LED_Void_LedSetOn(LED0);
		H_DCMotor_Void_DCMotorSetSpeed(70);
		_delay_ms(3000);
		H_LED_Void_LedSetOff(LED0);
		H_LED_Void_LedSetOn(LED1);
		H_DCMotor_Void_DCMotorSetSpeed(100);
		_delay_ms(3000);
		H_LED_Void_LedSetOff(LED1);
		H_LED_Void_LedSetOn(LED2);
		H_DCMotor_Void_DCMotorSetSpeed(800);
		_delay_ms(3000);
		H_LED_Void_LedSetOff(LED2);
	}

#endif
#if TRANSMIT==0
	/*Transmitting*/
    M_ADC_Void_ADCInit();
	H_LCD_Void_LCDInit();
	M_UART_Void_UARTInit();
	H_LED_Void_LedInit(LED0);
	H_LED_Void_LedInit(LED1);
	H_LED_Void_LedInit(LED2);
	M_UART_Void_UARTSetBaudRate(9600);
//	M_Timer_Void_PWMInit(TIMER0_CHANNEL);
//	M_Timer_Void_TimerStart(TIMER0_CHANNEL);

while(1)
{
    //M_UART_Void_UARTSend(H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING));

       H_LCD_Void_LCDWriteNumber(H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING));
     //H_LCD_Void_LCDGoTo(1,1);
     //H_LCD_Void_LCDWriteNumber(M_ADC_U16_ADCRead(ADC_CHANNEL_3));
     //u16 rec= M_ADC_U16_ADCRead(ADC_CHANNEL_0);
    // H_LCD_Void_LCDWriteNumber(rec);
//     if((rec>95) && (rec<115))
//     {
//    	 H_LED_Void_LedSetOn(LED0);
//    	 _delay_ms(500);
//    	 H_LED_Void_LedSetOff(LED0);
//    	 _delay_ms(500);
//     }
//     else if((rec>=115) && (rec<140))
//     {
//    	 H_LED_Void_LedSetOn(LED1);
//    	 _delay_ms(500);
//    	 H_LED_Void_LedSetOff(LED1);
//    	 _delay_ms(500);
//     }
//     else
//     {
//    	 H_LED_Void_LedSetOn(LED2);
//    	 _delay_ms(500);
//    	 H_LED_Void_LedSetOff(LED2);
//    	 _delay_ms(500);
//     }

    // M_Timer_Void_PWMSetDutyCycle(TIMER0_CHANNEL,(H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)%100));

	//H_Flex_Sensor_U8_SenosorRead(SENSOR1_READING)
	M_UART_Void_UARTSend(5);
   _delay_ms(200);
    H_LCD_Void_LCDClear();
    _delay_ms(100);
}
}
//End transmit
#endif
#if RECEIVE==1




#endif


