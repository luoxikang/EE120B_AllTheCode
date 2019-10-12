# Author: Wenguang Wang        Email:wangwenguang98@gmail.com
# Partner(s) Name: xikang luo  Email: luoxikang@csu.edu.cn
# Lab Section: 022
# Assignment: Lab #4  Exercise #2
# Exercise Description: [optional - include for your own benefit]
# I acknowledge all content contained herein, excluding template or example
# code, is my own original work.

# Test sequence from Init: !A1 && !A0, !A1 && A0, !A1 && !A0 => PORTC: 8
test " PINA: 0x00, 0x01, 0x00 => PORTC: 8, State: Waitrise"
set State = Init
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
expectPORTC 0x08
checkResult

# Test sequence from Init: !A1 && !A0, !A1 && A0, !A1 && !A0 twice => PORTC: 9
test " PINA: 0x00, 0x01, 0x00, 0x00, 0x01, 0x00 => PORTC: 9, State: Waitrise"
set State = Init 
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
expectPORTC 0x09
checkResult

# Test sequence from Init: !A1 && !A0, !A1 && A0, !A1 && !A0 three times => PORTC: 9
test " PINA: 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00 => PORTC: 9, State: Waitrise"
set State = Init 
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
setPINA 0x00
continue 2
setPINA 0x01
continue 2
setPINA 0x00
continue 2
expectPORTC 0x09
checkResult

# Test sequence from Init: !A1 && !A0, A1 && !A0, !A1 && !A0 => PORTC: 6
test " PINA: 0x00, 0x02, 0x00 => PORTC: 6, State: Waitrise"
set State = Init 
setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2
expectPORTC 0x06
checkResult

# Test sequence from Init: !A1 && !A0, A1 && !A0, !A1 && !A0  twice => PORTC: 5
test " PINA: 0x00, 0x02, 0x00, 0x00, 0x02, 0x00 => PORTC: 5, State: Waitrise"
set State = Init
setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2
setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2
expectPORTC 0x05
checkResult

# Test sequence from Init: !A1 && !A0, A1 && !A0, !A1 && !A0  nine times => PORTC: 0      
test " PINA: 0x00, 0x02, 0x00, 0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00,  0x00, 0x02, 0x00 => PORTC: 0, State: Waitrise"
set State = Init
setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2

setPINA 0x00
continue 2
setPINA 0x02
continue 2
setPINA 0x00
continue 2
expectPORTC 0x00
checkResult
