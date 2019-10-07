/*	Xikang Luo & luoxikang@csu.edu.cn: Wenguang Wang & wangwenguang98@gmail.com
 *	Lab Section: 022
 *	Assignment: Lab3  Exercise1 
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

    DDRA = 0x00; DDRB = 0x00; DDRC = 0xFF;
    PORTA = 0xFF; PORTB = 0xFF; PORTC = 0x00;

    unsigned char OnesNum = 0; 
    unsigned char i = 0;
    while(1){

        OnesNum = 0;
        for (i=0; i<8; i++){

            OnesNum = OnesNum + ((PINA >> i) & 0x01) + ((PINB >> i) & 0x01);

        }

        PORTC = OnesNum;

    }

    return 1;


}
