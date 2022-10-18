/*
 * WDT.c
 *
 * Created: 8/30/2022 9:51:07 PM
 *  Author: Mohamed Elsayed
 */ 
#include "WDT.h"

void WDT_ON(void){
	//SETBIT(WDTCR,WDTOE);
	SETBIT(WDTCR,WDE);
	SETBIT(WDTCR,WDP2);
	SETBIT(WDTCR,WDP1);
	SETBIT(WDTCR,WDP0);		
}

void WDT_OFF(void){
	SETBIT(WDTCR,WDE);
	SETBIT(WDTCR,WDTOE);
	WDTCR=0;
}
