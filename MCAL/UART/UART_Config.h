/*
 * UART_Config.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_UART_UART_CONFIG_H_
#define MCAL_UART_UART_CONFIG_H_
/*
 * UART_PARITY_MODE OPTIONS : [ UART_PARITY_DISABLE , UART_PARITY_EVEN , UART_PARITY_ODD ]
 */
#define UART_PARITY_MODE        UART_PARITY_DISABLE
/*
 * UART_STOP_BITS OPTIONS : [ UART_1_STOP_BIT , UART_2_STOP_BIT ]
 */
#define UART_STOP_BITS          UART_1_STOP_BIT
/*
 * SELECT F_OSC IN MEGA HZ
 */
#define F_OSC                   16


#define UART_PARITY_DISABLE                1
#define UART_PARITY_EVEN                   2
#define UART_PARITY_ODD                    3
#define UART_1_STOP_BIT                    1
#define UART_2_STOP_BIT                    2

#define UART_FINISHED_RECEIVING            1
#define UART_FINISHED_TRANSMITTING         1
#define POLLING_TIME                    2000000
#endif /* MCAL_UART_UART_CONFIG_H_ */
