/*
 * HC_05_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "HC_05_Config.h"
#include "HC_05_Interface.h"
#include "UART_Interface.h"

void H_HC_05_Void_HC_05_Init(void)
{
	M_UART_Void_UARTInit();
	M_UART_Void_UARTSetBaudRate(HC05_BAUDRATE);
}
void H_HC_05_Void_HC_05_Send(u8 Copy_U8_Data)
{
	M_UART_Void_UARTSend(Copy_U8_Data);
}
u8 H_HC_05_Void_HC_05_Rec(void)
{
	return M_UART_Void_UARTRec();
}
