/*	Author: jhuan314
 *  Partner(s) Name: Jack Huang
 *	Lab Section:23
 *	Assignment: Lab #3  Exercise #1
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
    DDRB = 0x00;
    //DDRD = 0xFF;
    DDRC = 0xFF;
    PORTA = 0xFF;
    PORTB = 0xFF;
    //PORTD = 0x00;
    PORTC = 0x00;

    unsigned char tmpA;
    unsigned char tmpB;
    /* Insert your solution below */
    while (1) {
	tmpA = 0;
	tmpB = 0;
	while(tmpA<8){
		tmpB += (PINA>>tmpA) & 0x01;
		tmpB += (PINB>>tmpA) & 0x01;
		tmpA+=1;
	}
	PORTC = tmpB;
    }
    return 1;
}
