#include <tiny2313.h>
#include <delay.h>

void main()
{
  DDRB = 0xff;

  while(1)
  {
    PORTB = 0xff;
    delay_ms(1000);
    PORTB = 0x00;
    delay_ms(1000);
  }
}
