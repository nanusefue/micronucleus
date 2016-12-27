#include <avr/io.h>
#include <util/delay.h>
 
 
int main (void)
{
  // set PB3 to be output
  DDRA = 0b00001000;
  while (1) {
    
    // flash# 1:
    // set PB3 high
    PORTA = 0b00001000; 
    _delay_ms(90);
    // set PB3 low
    PORTA = 0b00000000;
    _delay_ms(120);

  
  }
 
  return 1;
}
