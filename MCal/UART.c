/*
 * UART.c
 *
 * Created: 8/31/2022 11:44:01 PM
 *  Author: Mohamed Elsayed
 */ 
#include "UART.h"

void UART_init(void){

SETBIT(UCSRC,URSEL);
SETBIT(UCSRC,UCSZ0);
SETBIT(UCSRC,UCSZ1);
UBRRL=103;
SETBIT(UCSRB,TXEN);	
SETBIT(UCSRB,RXEN);
}

void UART_TX(uint8_t data){
	UDR=data;
	while(GETBIT(UCSRA,TXC)==0){}
}

uint8_t UART_RX(void){
	while(GETBIT(UCSRA,RXC)==0){}
		return UDR;
}