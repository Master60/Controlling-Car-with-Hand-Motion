/*
 * UART_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "UART_Interface.h"
#include "UART_Private.h"


void M_UART_Void_UARTInit(void)
{
	u8 Local_U8_UCSRCValue = 0b10000000;

	M_DIO_Void_SetPinDirection(PD0_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PD1_PIN,OUTPUT);

	/* TO SELECT CHARACTER SIZE -> 8 BITS */
	CLR_BIT(UCSRB_REG,UCSZ2_BIT);
	SET_BIT(Local_U8_UCSRCValue,UCSZ1_BIT);
	SET_BIT(Local_U8_UCSRCValue,UCSZ0_BIT);
	/* TO SELECT ASYNCH. MODE */
	CLR_BIT(Local_U8_UCSRCValue,UMSEL_BIT);

#if   UART_PARITY_MODE   ==   UART_PARITY_DISABLE
	CLR_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	CLR_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#elif UART_PARITY_MODE   ==   UART_PARITY_EVEN
	CLR_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#elif UART_PARITY_MODE   ==   UART_PARITY_ODD
	SET_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#endif
#if   UART_STOP_BITS   ==   UART_1_STOP_BIT
	CLR_BIT(Local_U8_UCSRCValue,USBS_BIT);
#elif UART_STOP_BITS   ==   UART_2_STOP_BIT
	SET_BIT(Local_U8_UCSRCValue,USBS_BIT);
#endif
	UCSRC_REG = Local_U8_UCSRCValue;

	/* TO ENABLE RX CICUIT */
	SET_BIT(UCSRB_REG,RXEN_BIT);
	/* TO ENABLE TX CIRCUIT */
	SET_BIT(UCSRB_REG,TXEN_BIT);
}
void M_UART_Void_UARTSetBaudRate(u32 Copy_U32_BaudRate)
{
	UBRRL_REG = ((F_OSC * (u32)1000000) / ((u32)16 * Copy_U32_BaudRate)) - 1;
}
void M_UART_Void_UARTSend(u8 Copy_U8_Data)
{
	u32 Local_U32_Counter = 0;
	UDR_REG = Copy_U8_Data;
	while(Local_U32_Counter < POLLING_TIME)
	{
		Local_U32_Counter++;
		if(GET_BIT(UCSRA_REG,TXC_BIT) == UART_FINISHED_TRANSMITTING)
		{
			break;
		}
	}
}
u8   M_UART_Void_UARTRec(void)
{
	u32 Local_U32_Counter = 0;
	while(Local_U32_Counter < POLLING_TIME)
	{
		Local_U32_Counter++;
		if(GET_BIT(UCSRA_REG,RXC_BIT) == UART_FINISHED_RECEIVING)
		{
			break;
		}
	}
	return UDR_REG;
}
u8 M_UART_Void_UARTRecBlock()
{
	while (GET_BIT(UCSRA_REG,RXC_BIT) == 0)
	{
      ;
	}
	return UDR_REG;
}
