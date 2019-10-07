test “PINA: 0x01  PINB: 0x01 => PORTC :0x02”
setPINA 0x01
setPINB 0x01
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0xFF  PINB: 0x00 => PORTC :0x08”
setPINA 0xFF
setPINB 0x00
continue 5
expectPORTC 0x08
checkResult


test “PINA: 0x00  PINB: 0xFF => PORTC :0x08”
setPINA 0x00
setPINB 0xFF
continue 5
expectPORTC 0x08
checkResult


test “PINA: 0xFF  PINB: 0xFF => PORTC :0x10”
setPINA 0xFF
setPINB 0xFF
continue 5
expectPORTC 0x10
checkResult


test “PINA: 0x2B  PINB: 0x3D => PORTC :0x09”
setPINA 0x2B
setPINB 0x3D
continue 5
expectPORTC 0x09
checkResult


