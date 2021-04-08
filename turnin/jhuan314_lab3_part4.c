/*	Author: jhuan314
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00;
    DDRB = 0xFF;
    //DDRD = 0xFF;
    DDRC = 0xFF;
    PORTA = 0xFF;
    PORTB = 0x00;
    //PORTD = 0x00;
    PORTC = 0x00;

    unsigned char tmpA;
    unsigned char tmpB;
    unsigned char tmpC;
    /* Insert your solution below */
    while (1) {
    	tmpC = PINA & 0x0F;
	tmpB = (PINA>>4) & 0x0F;
	PORTB = tmpB;
	tmpC = tmpC << 4;
	PORTC = tmpC;
	
    }
    return 1;
}
