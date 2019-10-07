test “PINA: 0x0F => PORTC: 0x00”
setPINA 0x0F
continue 5
expectPORTC 0x00
checkResult

test “PINA: 0x0E => PORTC: 0x01”
setPINA 0x0E
continue 5
expectPORTC 0x01
checkResult

test “PINA: 0x0D => PORTC: 0x01”
setPINA 0x0D
continue 5
expectPORTC 0x01
checkResult

test “PINA: 0x0B => PORTC: 0x01”
setPINA 0x0B
continue 5
expectPORTC 0x01
checkResult

test “PINA: 0x07 => PORTC: 0x01”
setPINA 0x07
continue 5
expectPORTC 0x01
checkResult

test “PINA: 0x0C => PORTC: 0x02”
setPINA 0x0C
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x0A => PORTC: 0x02”
setPINA 0x0A
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x06 => PORTC: 0x02”
setPINA 0x06
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x09 => PORTC: 0x02”
setPINA 0x09
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x05 => PORTC: 0x02”
setPINA 0x05
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x03 => PORTC: 0x02”
setPINA 0x03
continue 5
expectPORTC 0x02
checkResult

test “PINA: 0x01 => PORTC: 0x03”
setPINA 0x01
continue 5
expectPORTC 0x03
checkResult

test “PINA: 0x02 => PORTC: 0x03”
setPINA 0x02
continue 5
expectPORTC 0x03
checkResult

test “PINA: 0x04 => PORTC: 0x03”
setPINA 0x04
continue 5
expectPORTC 0x03
checkResult

test “PINA: 0x08 => PORTC: 0x03”
setPINA 0x08
continue 5
expectPORTC 0x03
checkResult

test “PINA: 0x00 => PORTC: 0x04”
setPINA 0x00
continue 5
expectPORTC 0x04
checkResult
