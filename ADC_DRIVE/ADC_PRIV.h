/*
 * ADC_PRIV.h
 *
 *  Created on: Mar 7, 2020
 *      Author: Anwar
 */
#define ADMUX 			*((volatile u8*)0x27)
#define ADCSRA 			*((volatile u8*)0x26)
#define ADCL			*((volatile u8*)0x25)
#define ADCH			*((volatile u8*)0x24)
#define ADC				*((volatile u16*)0x24)//3shan ashawr 3a;a adch w adcl m3 b3d 3shan u16
#define AREF_SEL		 0x00
#define AVCC_SEL		 0x48
#define INT_VCC_SEL 	 0xC0
#define PRE_2			 0x00 //division 3ala 2 fl ADC prescaler
#define PRE_4 			 0x02//divisoin 3ala 4 fl ADC Prescaler
#define ADEN			 0x80
#define ADSC			 0x40
#define ADIF			 4
