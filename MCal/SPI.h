/*
 * SPI.h
 *
 * Created: 9/1/2022 8:38:56 PM
 *  Author: Mohamed Elsayed
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "STD_MACROS.h"

#define SS   PB4
#define MOSI PB5
#define MISO PB6
#define SCK  PB7

void SPI_Master_init(void);
void SPI_Slave_init(void);
void SPI_Master_TX(uint8_t data);
uint8_t SPI_Slave_RX(void);


#endif /* SPI_H_ */