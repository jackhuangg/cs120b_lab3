/*	Author: jhuan314
 *  Partner(s) Name: Jack Huang
 *	Lab Section:23
 *	Assignment: Lab #3  Exercise #2
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
	tmpA = PINA & 0x0F;
	if(tmpA==0){
		tmpB+=64;
	}
	else if(tmpA==1 || tmpA==2){
		tmpB+=96;
	}	
	else if(tmpA==3 || tmpA==4){
		tmpB+=112;
	}	
	else if(tmpA==5 || tmpA==6){
		tmpB+=56;
	}
	else if(tmpA==7 || tmpA==8 || tmpA==9){
		tmpB+=60;
	}	
	else if(tmpA==10 || tmpA==11 || tmpA==12){
		tmpB+=62;
	}	
	else if(tmpA==13 || tmpA==14 || tmpA==15){
		tmpB+=63;
	
	}
	else{}
	PORTC=tmpB;	
    }
    return 1;
}
