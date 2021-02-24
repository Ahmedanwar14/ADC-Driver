/*
 * ADC_PROG.c
 *
 *  Created on: Mar 7, 2020
 *      Author: Anwar
 */
#include "ADC_PRIV.h"
#include "ADC_INT.h"
#include "ADC_CFG.h"
#include "BIT_MATH.h"
void ADC_VidInit(void)
{
	//b5tar a3ml AREF azay turrned off wla Vcc
	ADMUX|=REF_SEL;

	ADCSRA|=(PRESCALER_SEL|ADEN);
}
u16 ADC_u16GetAdValue(u8 u8ChannelId)
{
	ADMUX=(ADMUX&~(0x1F))|(u8ChannelId);
	ADCSRA|=ADSC;
	while(GET_BIT(ADCSRA,ADIF)==0);
	SET_BIT(ADCSRA,ADIF);//clearing ADIF by putting logical one on it 3shan lama yrg3 tany yb2a zero w ystna lahd ma tgelo l value l sa7
	return ADC;
}
