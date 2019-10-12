/*	Xikang Luo & luoxikang@csu.edu.cn: Wenguang Wang & wangwenguang98@gmail.com
 *	Lab Section: 022
 *	Assignment: Lab3  Exercise4 
 *	Exercise Description: None
 *	
 *	I acknowledge all content contained herein, excluding template 
 * 	or example code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void){

    DDRA = 0x00; DDRB = 0xFF; DDRC = 0xFF;
    PORTA = 0xFF; PORTB = 0x00; PORTC = 0x00;

    
    while(1){

        PORTB = (PINA >> 4) & 0x0F;
        PORTC = (PINA & 0x0F) << 4;

    }

    return 1;


}
