#include <avr/io.h>
#include "lcd.h"
#include "printf.h"

void init(void);

void main(void) {
    init();
    display_string("Hello Southampton!\n");
    display_color(GOLD, BLACK);
    display_font(18,24);
    display_string("new Font Text");
}


void init(void) {
    /* 8MHz clock, no prescaling (DS, p. 48) */
    CLKPR = (1 << CLKPCE);
    CLKPR = 0;

    init_lcd();
}
