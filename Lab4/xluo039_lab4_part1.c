/*	Author: jeffrey
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

typedef enum States {start, waitA0, pressA0, waitA1, pressA1 } States;

int exampleTick(int);

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;

    /* Insert your solution below */
    States state = start;
    while (1) {
        state = exampleTick(state);
    }
    return 1;
}

int exampleTick(int state) {
    unsigned char A0 = PINA & 0x01;
    switch (state) { // Transitions
        case start:
            state = waitA0;
            break;
        case waitA0:
            state = A0? pressA0: waitA0;
            break;
        case pressA0:
            state = A0? pressA0: waitA1;
            break;
        case waitA1:
            state = A0? pressA1: waitA1;
            break;
        case pressA1:
            state = A0? pressA1: waitA0;
            break;
        default:
            state = start;
            break;
    }
    switch (state) { // Actions
        case start: break;
        case waitA0: 
            PORTB = 0x01;
            break;
        case pressA0:
	    PORTB = 0x02; 
            break;
        case waitA1: 
            PORTB = 0x02;
            break;
        case pressA1:
	    PORTB = 0x01;
            break;
    }
    return state;
}
