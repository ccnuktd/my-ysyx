#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->x, BIND_RATE_SCR, BIND_DIR_IN , 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->ena, BIND_RATE_SCR, BIND_DIR_IN , 1, SW8);
	nvboard_bind_pin( &top->y, BIND_RATE_SCR, BIND_DIR_OUT, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->idx, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
	nvboard_bind_pin( &top->h, BIND_RATE_SCR, BIND_DIR_OUT, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}
