#include <avr/io.h>
#include <util/delay.h>

#include "lcd.h"

void main (void) {

	uint8_t test[] = "T:";
	uint8_t namn[] = "Maciej";
	uint8_t efternamn[] = "Nowicki";



	lcd_init();

	//lcd_sendChar('a');

	lcd_sendString(test);

	lcd_instruct(LCD_SetCursor | LCD_LINE_TWO);
	_delay_us(80);

	lcd_sendChar('b');

	//lcd_sendString(efternamn);

	while (1) {

	}
}

