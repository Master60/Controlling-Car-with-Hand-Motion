################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/GIE/GIE_Prog.c 

OBJS += \
./MCAL/GIE/GIE_Prog.o 

C_DEPS += \
./MCAL/GIE/GIE_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/GIE/%.o: ../MCAL/GIE/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\husse\workspace\slavenew\APP" -I"C:\Users\husse\workspace\slavenew\HAL\Flex_Sensor" -I"C:\Users\husse\workspace\slavenew\HAL\HC_05" -I"C:\Users\husse\workspace\slavenew\HAL\Stepper" -I"C:\Users\husse\workspace\slavenew\HAL\AT24C16A" -I"C:\Users\husse\workspace\slavenew\HAL\AT24C16A" -I"C:\Users\husse\workspace\slavenew\MCAL\I2C" -I"C:\Users\husse\workspace\slavenew\MCAL\SPI" -I"C:\Users\husse\workspace\slavenew\MCAL\UART" -I"C:\Users\husse\workspace\slavenew\HAL\Servo" -I"C:\Users\husse\workspace\slavenew\HAL\DCMotor" -I"C:\Users\husse\workspace\slavenew\MCAL\WDT" -I"C:\Users\husse\workspace\slavenew\MCAL\GIE" -I"C:\Users\husse\workspace\slavenew\MCAL\Timer" -I"C:\Users\husse\workspace\slavenew\HAL\LM35" -I"C:\Users\husse\workspace\slavenew\MCAL\ADC" -I"C:\Users\husse\workspace\slavenew\HAL\KeyPad" -I"C:\Users\husse\workspace\slavenew\MCAL\EXT_INT" -I"C:\Users\husse\workspace\slavenew\HAL\LCD" -I"C:\Users\husse\workspace\slavenew\APP\Projects" -I"C:\Users\husse\workspace\slavenew\HAL\SSD" -I"C:\Users\husse\workspace\slavenew\HAL\PB" -I"C:\Users\husse\workspace\slavenew\HAL\Buzzer" -I"C:\Users\husse\workspace\slavenew" -I"C:\Users\husse\workspace\slavenew\HAL" -I"C:\Users\husse\workspace\slavenew\MCAL" -I"C:\Users\husse\workspace\slavenew\MCAL\DIO" -I"C:\Users\husse\workspace\slavenew\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


