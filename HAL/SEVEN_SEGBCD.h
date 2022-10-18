/*
 * SEVEN_SEGBCD.h
 *
 * Created: 8/13/2022 6:21:21 PM
 *  Author: Mohamed Elsayed
 */ 


#ifndef SEVEN_SEGBCD_H_
#define SEVEN_SEGBCD_H_
#include "STD_MACROS.h"
#define INIT_SEVENBCD_PINS DDRA |= 0b11111100;
#define EN1(x) if(x==1) SETBIT(PORTA,2); else CLRBIT(PORTA,2); 
#define EN2(x) if(x==1) SETBIT(PORTA,3); else CLRBIT(PORTA,3);
#define A7(x)  if(x==1) SETBIT(PORTA,7); else CLRBIT(PORTA,7);
#define A6(x)  if(x==1) SETBIT(PORTA,6); else CLRBIT(PORTA,6);
#define A5(x)  if(x==1) SETBIT(PORTA,5); else CLRBIT(PORTA,5);
#define A4(x)  if(x==1) SETBIT(PORTA,4); else CLRBIT(PORTA,4);
void SEVEN_SEG_init(void);
void SEVEN_SEG_write(uint8_t num);


#endif /* SEVEN_SEGBCD_H_ */