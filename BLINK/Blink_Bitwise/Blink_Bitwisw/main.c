/*
 * Blink_Bitwisw.c
 *
 * Created: 6/8/2026 1:49:38 PM
 * Author : LENOVO
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB=DDRB|(1<<DDB5);    //DDRB|=(1<<DDB5)
    /* Replace with your application code */
    while (1) 
    {
		PORTB=PORTB|(1<<PB5);
		_delay_ms(2000);
		PORTB=PORTB&~(1<<PB5);
		_delay_ms(2000);
    }
}

