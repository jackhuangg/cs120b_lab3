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
    //DDRA = 0x00;
    DDRB = 0xFE;
    DDRD = 0x00;
    //DDRC = 0xFF;
    //PORTA = 0xFF;
    PORTB = 0x00;
    PORTD = 0xFF;
    //PORTC = 0x00;

    signed short tmpA;
    unsigned char tmpB = 0;
    unsigned char tmpC;
    /* Insert your solution below */
    while (1) {
	tmpA = PIND;
	tmpA = tmpA << 1;
	tmpC = PINB & 0x01;
	tmpA += tmpC;
	if(tmpA>=70){
		PORTB = 0x02;
	}
	else if(tmpA > 5 && tmpA < 70){
		PORTB = 0x04;
	}
	else{
		PORTB = 0x00;
	}
    }
    return 1;
}
