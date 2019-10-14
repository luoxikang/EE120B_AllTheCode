# Author: Wenguang Wang        Email:wangwenguang98@gmail.com
# Partner(s) Name: xikang luo  Email: luoxikang@csu.edu.cn
# Lab Section: 022
# Assignment: Lab #4  Exercise #1
# Exercise Description: [optional - include for your own benefit]
# I acknowledge all content contained herein, excluding template or example
# code, is my own original work.

# Test sequence from Init: !A1 && !A0, !A1 && A0, !A1 && !A0 => PORTB: 1



Test " PINA: 0x00, 0x04, 0x00, 0x02,0x00, 0x04, 0x00, 0x02,0x00, 0x80, 0x00 => PORTB:0x00 -> 0x01 -> 0x00 "
set State = Start
setPINA 0x00
continue 2
setPINA 0x04
continue 2
setPINA 0x00
continue 2

expectPORTB 0x00
checkResult

setPINA 0x02
continue 2
expectPORTB 0x00
checkResult

setPINA 0x00
continue 2
expectPORTB 0x01
checkResult

setPINA 0x04
continue 2
setPINA 0x00
continue 2
setPINA 0x02
continue 2
expectPORTB 0x01
checkResult
setPINA 0x00
continue
expectPORTB 0x00
checkResult

setPINA 0x04
continue 2
setPINA 0x00
continue 2
setPINA 0x02
continue 2
expectPORTB 0x00
checkResult
setPINA 0x00
continue
expectPORTB 0x01
checkResult

setPINA 0x08
continue 2
expectPORTB 0x01
checkResult

setPINA 0x00
continue 2
expectPORTB 0x00
checkResult

