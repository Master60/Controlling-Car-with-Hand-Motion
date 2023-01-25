// #if , #endif were used to lock and unlock blocks of code using the constants below
#define receive  1
#define Motor_Test 0
#define send     0
// These are the sensor values used to control motors' speeds, they were obtained by testing
// Each of the 2 sensors used has its own values, so these constants are changed depending
// on which kit is being programmed
#define stopSensorVal 105
#define maxSensorVal 130
#define minSensorVal 112
#include "Projects.h"


int main()
{
// If the kit will start receiving values
// A value will be received using UART + Bluetooth, then depending on it one of the
// Three motor speeds will be set
#if receive==1

	    M_ADC_Void_ADCInit();
		H_LCD_Void_LCDInit();
		M_UART_Void_UARTInit();
		H_LED_Void_LedInit(LED0);
		H_LED_Void_LedInit(LED1);
		H_LED_Void_LedInit(LED2);
		H_Buzzer_Void_BuzzerInit();
		H_Buzzer_Void_BuzzerSetOff();
		M_UART_Void_UARTSetBaudRate(9600);
		H_DCMotor_Void_DCMotorInit();
		H_DCMotor_Void_DCMotorSetDirection(CW);
		H_DCMotor_Void_DCMotorStart();
	    H_LCD_Void_LCDClear();
		u8 recieved = 150;

			while(1)
			{
				// When a speed is set, one of the three AtMega32 leds will correspondingly be turned on
				 if (recieved<minSensorVal)
				{
					H_LED_Void_LedSetOff(LED1);
					H_LED_Void_LedSetOff(LED2);
					H_DCMotor_Void_DCMotorSetSpeed(70);
					H_LED_Void_LedSetOn(LED0);
				}

				 if(recieved>=minSensorVal && recieved<maxSensorVal)
				{
					H_LED_Void_LedSetOff(LED0);
					H_LED_Void_LedSetOff(LED2);
					H_DCMotor_Void_DCMotorSetSpeed(85);
					H_LED_Void_LedSetOn(LED1);
				}
				else
				{
					H_LED_Void_LedSetOff(LED0);
					H_LED_Void_LedSetOff(LED1);
					H_DCMotor_Void_DCMotorSetSpeed(100);
					H_LED_Void_LedSetOn(LED2);
				}
			_delay_ms(200);
			}
#endif
// This code block was used to test the motor's performance at different speeds
// It starts by setting the lowest speed, then the ones above
// Each speed is set for 5 s before switching to the next one
// When a speed is set, its corresponding led is turned on.
#if Motor_Test==1
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
		H_DCMotor_Void_DCMotorSetSpeed(80); // Minimum speed
		_delay_ms(5000);
		H_LED_Void_LedSetOff(LED0);
		H_LED_Void_LedSetOn(LED1);
		H_DCMotor_Void_DCMotorSetSpeed(90); // Intermediate speed
		_delay_ms(5000);
		H_LED_Void_LedSetOff(LED1);
		H_LED_Void_LedSetOn(LED2);
		H_DCMotor_Void_DCMotorSetSpeed(100); // Maximum speed
		_delay_ms(5000);
		H_LED_Void_LedSetOff(LED2);
	}

#endif

// This code block is used to take readings from a sensor and send them using UART + Bluetooth
#if send==1
	H_Flexible_SensorInit();
	H_LCD_Void_LCDInit();
	M_UART_Void_UARTInit();
	H_LED_Void_LedInit(LED0);
	H_LED_Void_LedInit(LED1);
	H_LED_Void_LedInit(LED2);
	H_Buzzer_Void_BuzzerInit();
	H_Buzzer_Void_BuzzerSetOff();
	M_UART_Void_UARTSetBaudRate(9600);

// Since the sensor readings were not 100% stable, we take several reading first, then send their mean value
// This has made the readings alot more stable
while(1)
{
	    u32 sum = 0;
		u32 mean = 0;
		int i = 0;
		for(i =0;i<500;i++)
		{
			sum += (u32)u8_Read_Flexible_Sensor(SENSOR1_READING);
		}
		mean = sum/500;
		M_UART_Void_UARTSend(mean);

   _delay_ms(200);
}

#endif

}

