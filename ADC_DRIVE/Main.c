/*
 * Main.c
 *
 *  Created on: Mar 7, 2020
 *      Author: Anwar
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_INT.h"
#include "DIO_PRIV.h"
#include "ADC_PRIV.h"
#include "ADC_INT.h"
#include "avr/delay.h"


void main()
{
	u16 AD_Val,Volt_val;
	DIO_vidSetPinDir(PORTA,0,INPUT);
	DIO_vidSetPinDir(PORTD,0,OUTPUT);
	DIO_vidSetPinDir(PORTD,1,OUTPUT);
	DIO_vidSetPinDir(PORTD,2,OUTPUT);
	ADC_VidInit();
	while(1)
	{
		AD_Val=ADC_u16GetAdValue(AD_CHANNEL0);
		Volt_val=(u16)(((u32)AD_Val*5000)/1024);
		if((Volt_val<=1500))
		{
			DIO_vidSetPinVal(PORTD,0,HIGH);

			DIO_vidSetPinVal(PORTD,1,LOW);
			DIO_vidSetPinVal(PORTD,2,LOW);

		}
		else if(Volt_val<=3000)
		{
			DIO_vidSetPinVal(PORTD,0,LOW);
			DIO_vidSetPinVal(PORTD,1,HIGH);
			DIO_vidSetPinVal(PORTD,2,LOW);
		}
		else
		{
			DIO_vidSetPinVal(PORTD,0,LOW);
			DIO_vidSetPinVal(PORTD,1,LOW);
			DIO_vidSetPinVal(PORTD,2,HIGH);
		}
	}

}

