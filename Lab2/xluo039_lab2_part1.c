/*	Xikang Luo & luoxikang@csu.edu.cn: Wenguang Wang & wangwenguang98@gmail.com
 *	Lab Section: 022
 *	Assignment: Lab2  Exercise1 
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

    DDRA = 0x00; DDRB = 0xFF;
    PORTA = 0xFF; PORTB = 0x00;

    unsigned char LightSensor = 0;
    unsigned char GarageDoor = 0;
    while(1){

        LightSensor = PINA & 0x02;
        LightSensor = LightSensor >> 1;

        GarageDoor = PINA & 0x01;
        
        PORTB = GarageDoor & ~LightSensor;

    }

    return 1;


}
