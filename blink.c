#include <inttypes.h>
#include <avr/io.h>
#include <util/delay.h>

void delay_ms(uint16_t ms)
{
	while(ms)
	{
		_delay_ms(1);
		--ms;
	}
}


#define LED_DDR  DDRB
#define LED_PORT  PORTB
#define LED_BIT  _BV(5)


int main()
{
	LED_DDR |= LED_BIT
}
