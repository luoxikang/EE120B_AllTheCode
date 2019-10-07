/*	Xikang Luo & luoxikang@csu.edu.cn: Wenguang Wang & wangwenguang98@gmail.com
 *	Lab Section: 022
 *	Assignment: Lab2  Exercise2 
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

    DDRA = 0x00; DDRC = 0xFF;
    PORTA = 0xFF; PORTC = 0x00;

    unsigned char LightSensor = 0;
    unsigned char GarageDoor = 0;
    unsigned char CarNum = 0;

    unsigned char Carsensor0 = 0;
    unsigned char Carsensor1 = 0;
    unsigned char Carsensor2 = 0;
    unsigned char Carsensor3 = 0;
    while(1){

        Carsensor0 = PINA & 0x01;
        Carsensor1 = (PINA >> 1) & 0x01;
        Carsensor2 = (PINA >> 2) & 0x01;
	Carsensor3 = (PINA >> 3) & 0x01;
        
        CarNum = Carsensor0 + Carsensor1 + Carsensor2 + Carsensor3;
        
        PORTC = 4 -  CarNum;

    }

    return 1;


}
