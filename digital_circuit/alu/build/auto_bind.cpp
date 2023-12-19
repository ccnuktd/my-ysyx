#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->A, BIND_RATE_SCR, BIND_DIR_IN , 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->B, BIND_RATE_SCR, BIND_DIR_IN , 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->S, BIND_RATE_SCR, BIND_DIR_OUT, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->shamt, BIND_RATE_SCR, BIND_DIR_IN , 3, SW10, SW9, SW8);
	nvboard_bind_pin( &top->O, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
	nvboard_bind_pin( &top->C, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD5);
	nvboard_bind_pin( &top->Z, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD6);
}
