# Test sequence from waitA0: A0, !A0, A1 => PORTB: 1
test "PINA: 0x01, 0x00, 0x02 => PORTB: 1, state: pressA1"
set state = start
setPINA 0x00
continue 2
expectPORTB 0x01
checkResult 


setPINA 0x01
continue 2
expectPORTB 0x02
checkResult 

setPINA 0x00
continue 2
expectPORTB 0x02
checkResult 

setPINA 0x01
continue 2
expectPORTB 0x01
checkResult

setPINA 0x00
continue 2
expectPORTB 0x01
checkResult
