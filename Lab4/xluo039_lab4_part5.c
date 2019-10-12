#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
#define MAXNUM 4



typedef  enum KeyStates{Start ,Press, Wait} KeyState;
KeyState Stick(KeyState State);

char KeyQueue[MAXNUM] = {0};
void Record(char key);
void Check();
KeyState State = Start;

int main(void){
    DDRA = 0x00; DDRB = 0xFF;
    PORTA = 0xFF; PORTB = 0x00;

    while(1){
	State = Stick(State);
    }

    return 1;
}

KeyState Stick(KeyState State){
    unsigned char X = PINA & 0x01;
    unsigned char Y = PINA & 0x02;
    unsigned char Shape = PINA & 0x04;
    unsigned char Button = PINA & 0x80; 

    switch(State){

        case Start:{
            State  = Wait;
            break;
        }
            
        
        case Wait:{
            if (X){
                State = Press;
                Record('X');
            }
            else if (Y)
            {
                State = Press;
                Record('Y');
            }
            else if (Shape)
            {
                State = Press; 
                Record('#');
            }
            else if (Button)
            {
                State = Press;
                Record('B'); // B is Button
            }
            else
            {
                State = State;
            }

        } 

        case Press:{
            if (!(X || Y || Button || Shape)){
                State = Wait;
            }

        }

        Check();
    }

    
}

void Record(char Key){
	unsigned char i = 0;
        while (i < MAXNUM-1){
            KeyQueue[i+1] = KeyQueue[i];
	    i++;
        }
        KeyQueue[0] = Key;
    }

void Check(void){
        if (KeyQueue[0] == 'X' && KeyQueue[1] == 'Y' && KeyQueue[2] == 'X' && KeyQueue[3] == '#' ){
            PORTB = 0x01; // Unlock
        } else if (KeyQueue[0] = 'B')       
        {
            PORTB = 0x00; // Lock
        } else
        {
            ////// 
        }
                    
}
