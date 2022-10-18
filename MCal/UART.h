/*
 * UART.h
 *
 * Created: 8/31/2022 11:44:17 PM
 *  Author: Mohamed Elsayed
 */ 


#ifndef UART_H_
#define UART_H_
#include "STD_MACROS.h"

void UART_init(void);
void UART_TX(uint8_t);
uint8_t UART_RX(void);



#endif /* UART_H_ */