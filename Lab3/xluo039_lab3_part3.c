/*      Author: Wenguang Wang        Email:wangwenguang98@gmail.com
 *      Partner(s) Name: xikang luo  Email: luoxikang@csu.edu.cn
 *      Lab Section: 022
 *      Assignment: Lab #3  Exercise #2
 *      Exercise Description: [optional - include for your own benefit]
 *
 *      I acknowledge all content contained herein, excluding template or example
 *      code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void){

    DDRA = 0x00; DDRC = 0xFF;
    PORTA = 0xFF; PORTC = 0x00;
    unsigned char A = 0x00; 
    unsigned char B = 0x00; 
    unsigned char C = 0x00;

    while(1){ 
    unsigned char temp = 0x00; 
    temp = PINA;
    switch (temp & 0x0F) {

        case 1:  
        PORTC =  0x60;
        break;
        case 2:
        PORTC =  0x60;
        break;
        case 3:
        PORTC =  0x70;
        break;
        case 4:
        PORTC =  0x70;
        break;
        case 5:
        PORTC =  0x38;
        break;
        case 6:
        PORTC =  0x38;
        break;
        case 7:
        PORTC =  0x3C;
        break;
        case 8:
        PORTC =  0x3C;
        break;
        case 9:
        PORTC = 0x3C;
        break;
        case 10:
        PORTC =  0x3E;
        break;
        case 11:
        PORTC =  0x3E;
        break;
        case 12:
        PORTC =  0x3E;
        break;
        case 13:
        PORTC =  0x3F;
        break;
        case 14:
        PORTC =  0x3F;
        break;
        case 15:
        PORTC =  0x3F;
        break;

        default:
        PORTC = PORTC;
        break;     
        }
        
        A = PINA & 0x10;
        B = PINA & 0x20;
        C = PINA & 0x40;
        if(A && B && (!C)){
        
	PORTC =  PORTC | 0x80;
        }      
       


   }
    
    return 0;


}
