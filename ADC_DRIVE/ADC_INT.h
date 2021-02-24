/*
 * ADC_INT.h
 *
 *  Created on: Mar 7, 2020
 *      Author: Anwar
 */
#include "STD_TYPES.h"
#define AD_CHANNEL0 	0
#define AD_CHANNEL1 	1
#define AD_CHANNEL2 	2
#define AD_CHANNEL3 	3
#define AD_CHANNEL4 	4
#define AD_CHANNEL5 	5
#define AD_CHANNEL6 	6
#define AD_CHANNEL7 	7

void ADC_VidInit(void);
u16 ADC_u16GetAdValue(u8 u8ChannelId);




