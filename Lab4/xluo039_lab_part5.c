#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
#define MAXNUM 4



typedef  enum KeyStates{Start ,Press, Wait} KeyState;
KeyState Stick(KeyState State);

char[MAXNUM] KeyQueue = {0};
void Record(char key);
void Check();

int main(void){
    DDRA = 0x00; DDRB = 0xFF;
    PORTA = 0xFF; PORTB = 0x00;

    while(1){
        KeyState State = Start;
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
            State  = Wait_C;
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
                State = Press；
                Record('#');
            }
            else if (Button)
            {
                State = Press;
                Record('B') // B is Button
            }
            else
            {
                State = State;
            }

        } 

        case Press:{
            if !(X || Y || Button || Shape){
                State = Wait;
            }

        }

        Check();
    }

    void Record(char Key){
        for (int i = 0; i < MAXNUM-1; i++){
            KeyQueue[i+1] = KeyQueue[i];
        }
        KeyQueue[0] = Key;
    }

    void Check(){
            if (KeyQueue[0] == 'X' && KeyQueue[1] == 'Y' && KeyQueue[2] == 'X' && KeyQueue[3] == '#' ){
                PORTB = 0x01; // Unlock
                KeyQueue = {0};
            } else if (KeyQueue[0] = 'B')       
            {
                PORTB = 0x00; // Lock
                KeyQueue = {0};
            } else
            {
                ////// 
            }
                     
    }
}