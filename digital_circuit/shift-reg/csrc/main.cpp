#include <nvboard.h>
#include <Vtop.h>
#include "verilated_vcd_c.h"

static VerilatedVcdC* fp;
static Vtop* dut;
int step = 0;

#ifdef NVBOARD
void nvboard_bind_all_pins(Vtop* top);
#endif

void single_cycle() {
    dut->clk = 0; dut->eval();
#ifndef NVBOARD
    fp->dump(step ++);
#endif
    dut->clk = 1; dut->eval();
#ifndef NVBOARD
    fp->dump(step ++);
#endif
}

void init() {
    // set 1 to data
    dut->shamt = 1;
    dut->din = 1;
    single_cycle();

    // come to work
    dut->shamt = 2;
    single_cycle();
}


int main() {
    dut = new Vtop();

#ifdef NVBOARD
    nvboard_bind_all_pins(dut);
    nvboard_init();
    while (1) {
		nvboard_update();
        dut->eval();
	}  
    return 0;
#else
    Verilated::traceEverOn(true);
	printf("Enable waves ...\n");
	fp = new VerilatedVcdC();
	dut->trace(fp, 0);
	fp->open("dump.vcd");

    init();

    int n = 500;
    while(n --) {
		single_cycle();
        // n=250, stop 3 cycle
        if (n == 250) {
            dut->shamt = 3;
            single_cycle();
            single_cycle();
            single_cycle();
            dut->shamt = 2;
        }
	} 

    delete dut;
    fp->close();
	delete fp;
#endif
}