/*
 * SPI.c
 *
 * Created: 9/1/2022 8:38:42 PM
 *  Author: Mohamed Elsayed
 */ 

#include "SPI.h"
void SPI_Master_init(void){
	SETBIT(DDRB,MOSI);
	SETBIT(DDRB,SS);
	SETBIT(DDRB,SCK);
	//SETBIT(SPCR,SPE);
	//SETBIT(SPCR,MSTR);
	SPCR|=(1<<MSTR)|(1<<SPE);
}
void SPI_Slave_init(void){
	SETBIT(DDRB,MISO);
	//SETBIT(SPCR,SPE);
	SPCR|=(1<<SPE);
}
void SPI_Master_TX(uint8_t data){
	SPDR=data;
	while(GETBIT(SPSR,SPIF)==0){}
}
uint8_t SPI_Slave_RX(void){
	while(GETBIT(SPSR,SPIF)==0){}
		return SPDR;
}