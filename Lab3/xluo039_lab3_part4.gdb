test “PINA: 0x01  => PORTB:0x00 PORTC :0x10”
setPINA 0x00
continue 5
expectPORTB 0x00
expectPORTC 0x10
checkResult