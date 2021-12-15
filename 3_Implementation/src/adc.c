#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif
#include "adc.h"
#include<avr/io.h>
#include<util/delay.h>

void InitADC()
{
    /*AVcc = +5V = Vref*/
    ADMUX = (1<<REFS0);
    /* Enable ADC and set Prescalr to 2 */
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
     /*Select ADC Channel: must be 0-7*/
    ADMUX = (ADMUX & 0xF0) | (ch & 0x0F);
 //single conversion mode
    ADCSRA |= (1<<ADSC);
 // wait until ADC conversion is complete
    while( ADCSRA & (1<<ADSC) );
     return ADC;
}
