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

void test_dut(int time, int Y, int X0, int X1, int X2, int X3) {
	top->Y = Y;
	top->X0 = X0;
	top->X1 = X1;
	top->X2 = X2;
	top->X3 = X3;
	top->eval();

#ifdef NVBOARD
	nvboard_update();
#else
	fp->dump(time);	
	if (Y == 0) assert(top->F == top->X0);
	else if (Y == 1) assert(top->F == top->X1);
	else if (Y == 2) assert(top->F == top->X2);
	else assert(top->F == top->X3);
#endif
}

void sim_init(){
	top->X0 = 0;
	top->X1 = 1;
	top->X2 = 2;
	top->X3 = 3;
	top->Y = 0;
}

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
	sim_init();

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
	int cycle = 10000;
	int Y, X0, X1, X2, X3;
	for (int i = 0; i < cycle; i ++){
		Y = rand() % 4;
		X0 = rand() % 4;
		X1 = rand() % 4;
		X2 = rand() % 4;
		X3 = rand() % 4;
		
		test_dut(i, Y, X0, X1, X2, X3);
	}
#endif
	sim_exit();
	return 0;
}
