#include "nvboard.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <ctime>

// #define NVBOARD

static VerilatedVcdC* fp;
static Vtop* top;

#ifdef NVBOARD
void nvboard_bind_all_pins(Vtop* top);
#endif

/*
void test_dut(int time, int x, int ena) {
	top->x = x;
	top->ena = ena;
	top->eval();

#ifdef NVBOARD
	nvboard_update();
#else
	fp->dump(time);	
	if (ena == 0) assert(~top->idx && top->y == 0);
	else {
		for (int i = 7; i >= 0 ; i --) {
			if (x & (1 << i)) {
				assert(i == top->y);
				break;
			}
		}
	}
#endif
}

void sim_init(){
	top->ena = 0;
	top->x = 0;
}
*/

void sim_exit() {
	delete top;
#ifdef NVBOARD
	nvboard_quit();
#else
	fp->close();
	delete fp;
#endif
}

int main() {
	srand(time(0));
	top = new Vtop();
	// sim_init();

#ifdef NVBOARD
	nvboard_bind_all_pins(top);
	nvboard_init();
#else
	Verilated::traceEverOn(true);
	printf("Enable waves ...\n");
	fp = new VerilatedVcdC();
	top->trace(fp, 0);
	fp->open("dump.vcd");
#endif

#ifdef NVBOARD
	while (1) {
		nvboard_update();
		top->eval();
	}  
#else
	int cycle = 512;
	int x, ena;
	for (int i = 0; i < cycle; i ++){
		ena = i / 256;
		x = i % 256;
		// test_dut(i, x, ena);
	} 
#endif
	sim_exit();
	return 0;
}	

