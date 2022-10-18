/*
 * SEVEN_SEGBCD.c
 *
 * Created: 8/13/2022 6:20:59 PM
 *  Author: Mohamed Elsayed
 */ 

#include "SEVEN_SEGBCD.h"
/*****************************************************************************
* Function Name: SEVEN_SEG_init
* Purpose      : PortA Pins from 2 to 7 are output
* Parameters   : void
* Return value : void
*****************************************************************************/
void SEVEN_SEG_init(void){
	INIT_SEVENBCD_PINS
}
/*****************************************************************************
* Function Name: SEVEN_SEG_write
* Purpose      : Turn on LEDs of Seven segment to complete given digit (0-->9)
* Parameters   : uint8_t num (0 to 99)
* Return value : void
*****************************************************************************/
void SEVEN_SEG_write(uint8_t num){ 
 	uint8_t x=num%10;
	EN1(1)
	EN2(0)
	A4(GETBIT(x,0))
	A5(GETBIT(x,1))
	A6(GETBIT(x,2))
	A7(GETBIT(x,3))
	_delay_ms(10);
	x=num/10;
	EN1(0)
	EN2(1)
	A4(GETBIT(x,0))
	A5(GETBIT(x,1))
	A6(GETBIT(x,2))
	A7(GETBIT(x,3))
	_delay_ms(10);
}